#include <iostream>

void change(char* text)
{
    char temp;
    temp = text[0];
    text[0] = text[2];
    text[2] = temp;
}


int main()
{
    char num1[4], num2[4];
    std::cin >> num1 >> num2;

    change(num1);
    change(num2);

    if (std::stoi(num1) > std::stoi(num2)) {
        std::cout << num1;
    } else {
        std::cout << num2;
    }
    return 0;
}