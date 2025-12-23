#include <iostream>

int main()
{
    int num0, num1;
    std::cin >> num0 >> num1;
    if (num0 > num1) {
        std::cout << ">" << std::endl;
    } else if (num0 < num1) {
        std::cout << "<" << std::endl;
    } else {
        std::cout << "==" << std::endl;
    }
    return 0;
}