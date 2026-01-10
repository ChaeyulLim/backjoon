#include <iostream>
#include <string>

int main()
{
    std::string text;
    std::cin >> text;

    int num = 1;
    for (int i = 0; i < text.size() / 2; i++) {
        if (text[i] != text[text.size() - i -1]) {
              num = 0;  
        }
    }
    std::cout << num;

    return 0;
}