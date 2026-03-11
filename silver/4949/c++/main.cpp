#include <iostream>
#include <string>
#include <stack>

int main()
{
    std::string text;

    while (text != ".") {
        std::stack<char> array; 

        std::getline(std::cin, text);
        if (text == ".") {
            break;
        }
            
        for (char data : text) {
            if (array.size() == 0 && (data == ']' || data == ')')) {
                array.push('n');
                break;
            }

            if (!(data == '[' || data == ']' || data == '(' || data == ')')) {
                continue;
            }


            if (data == '[' || data == '(') {
                array.push(data);
            } else if (data == ']' && array.top() == '[') {
                array.pop();
            } else if (data == ')' && array.top() == '(') {
                array.pop();
            } else {
                array.push(data);
            }
        }

        std::cout << (array.size() == 0 ? "yes" : "no") << '\n';
    }

    return 0;
}