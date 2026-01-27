#include <iostream>

int main()
{
    long long n;
    std::cin >> n;
    long long result = n * (n - 1) / 2;
    std::cout << result << '\n' << 2;

    return 0;
}