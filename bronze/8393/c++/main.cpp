#include <iostream>

int main()
{
    int n, number = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        number += i;
    }
    std::cout << number;
    return 0;
}