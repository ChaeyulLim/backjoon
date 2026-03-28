#include <iostream>
#include <string>
int main()
{
    std::string text;
    std::cin >> text;
    for (char data : text) {
        if (data > 'Z') {
            // 소문자
            std::cout << static_cast<char>(data-32);
        } else {
            // 대문자
            std::cout << static_cast<char>(data+32);
        }
    }
    return 0;
}