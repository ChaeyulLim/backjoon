#include <iostream>

int main()
{
    int n, a, b;
    int c, d, r, temp, result;

    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> a >> b;
        r = 1;
        c = a; 
        d = b;
        while (r > 0) {
            r = c % d;
            c = d;
            d = r;
        }
        temp = c;

        std::cout << ((a * b) / temp) << '\n';
    }
    return 0;
}