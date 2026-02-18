#include <iostream>

int main()
{
    int a, b, c, d, r;
    std::cin >> a >> b >> c >> d;

    int num0 = (a * d + c * b);
    int num1 = (b * d);

    r = 1;
    a = num0;
    b = num1;

    while (r > 0) {
        r = a % b;
        a = b;
        b = r;
    }

    std::cout << (num0 / a) << ' ' << (num1 / a);
    return 0;
}