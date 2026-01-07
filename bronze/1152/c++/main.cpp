#include <iostream>
#include <string>

int main()
{
    std::string text;
    
    std::getline(std::cin, text);
    int count = 0;
    bool isCheck = false;
    for (auto name : text) {
        if (isCheck) {
            if (name == ' ') {
                isCheck = false;
            }
        } else {
            if (name != ' ') {
                isCheck = true;
                count++;
            }
        }
    }

    std::cout << count;
    return 0;
}