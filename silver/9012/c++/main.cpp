#include <iostream>
#include <string>
#include <stack>

int main()
{
    std::string text;

    int num;
    std::cin >> num;
    std::cin.ignore();

    for (int i = 0; i < num; i++) {
        std::stack<char> array; 

        std::getline(std::cin, text);
        for (char data : text) {
            if (array.size() == 0 && data == ')') {
                array.push('n');
                break;
            }

            if (data == '(') {
                array.push(data);
            } else if (data == ')' && array.top() == '(') {
                array.pop();
            } else {
                array.push(data);
            }
        }

        std::cout << (array.size() == 0 ? "YES" : "NO") << '\n';
    }

    return 0;
}