#include <iostream>

int main()
{
    int num0, num1, a, b, c;
    std::cin >> num0;
    std::cin >> num1;
    a = (num1 % 10);
    b = (num1 % 100 / 10);
    c = (num1 / 100);
    std::cout << num0 * a << std::endl;
    std::cout << num0 * b << std::endl;
    std::cout << num0 * c << std::endl;
    std::cout << num0 * num1 << std::endl;
    return 0;
}