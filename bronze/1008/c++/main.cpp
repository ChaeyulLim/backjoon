#include <iostream>

int main()
{
    double num0, num1;
    std::cin >> num0 >> num1;
    std::cout.precision(9);
    std::cout << std::fixed << num0 / num1;
    return 0;
}