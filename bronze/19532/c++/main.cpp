#include <iostream>

int main()
{
    int a, b, c, d, e, f;
    std::cin >> a >> b >> c >> d >> e >>f;

    for (int y = -999; y <= 999; y++) {
        for (int x = -999; x <= 999; x++) {
            if ((a*x) + (b*y) == c && (d*x) + (e*y) == f) {
                std::cout << x << ' ' << y << '\n';
                return 0;
            }
        }    
    }

    return 0;
}