#include <iostream>

int main()
{
    long long int a, b, c, d, r;

    std::cin >> a >> b;
    c = a;
    d = b;
    r = 1;
    while (r > 0) {
        r = c % d;
        c = d;
        d = r;
    }

    std::cout << ((a * b) / c);

    return 0;
}