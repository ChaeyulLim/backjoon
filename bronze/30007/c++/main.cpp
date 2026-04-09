#include <iostream>

int main()
{
    int num, a, b, x;
    std::cin >> num;
    for (int i = 0; i < num; i++) {
        std::cin >> a >> b >> x;
        std::cout << (a * (x -1) + b) << '\n';
    }
    return 0;
}