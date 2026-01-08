#include <iostream>
#include <string>

int main()
{
    std::string text;
    while (std::getline(std::cin, text)) {
        std::cout << text << '\n';
    }
    return 0;
}