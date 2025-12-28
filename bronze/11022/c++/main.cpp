#include <iostream>

int main()
{
    int count, num1, num2;
    std::cin >> count;
    for (int i = 1; i <= count; i++) {
        std::cin >> num1 >> num2;
        std::cout << "Case #" << i << ": " << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
    }
    return 0;
}