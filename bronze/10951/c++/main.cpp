#include <iostream>

int main()
{
    int num0, num1;
    
    while (std::cin >> num0 >> num1) {
        std::cout << num0 + num1 << '\n';
    }
    return 0;
}