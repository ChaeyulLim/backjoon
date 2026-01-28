#include <iostream>

int main()
{
    int a0, a1, c, n;
    std::cin >> a0 >> a1 >> c >> n;
    int f = a0 * n + a1;
    bool answer = (a0 <= c && f <= c * n);
    std::cout << (answer);
    return 0;
}