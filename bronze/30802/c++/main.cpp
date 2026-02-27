#include <iostream>

int main()
{
    int n, size[6], t, p, count = 0;

    std::cin >> n;
    for (int _ = 0; _ < 6; _++) {
        std::cin >> size[_];
    }
    std::cin >> t >> p;

    for (int i = 0; i < 6; i++) {
        if (size[i] % t == 0) {
            count += (size[i] / t);
        } else {
            count += (size[i] / t) +1;
        }
    }

    std::cout << count << '\n' << (n / p) << ' ' << (n % p);

    return 0;
}