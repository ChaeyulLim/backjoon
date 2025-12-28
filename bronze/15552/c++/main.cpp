#include <iostream>


int main()
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);
    int count, num1, num2;
    std::cin >> count;
    for (int i = 0; i < count; i++) {
        std::cin >> num1 >> num2;
        std::cout << num1 + num2 << "\n";
    }
    return 0;
}