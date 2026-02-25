#include <iostream>

int main()
{
    int h, w, n;
    int repeat;

    std::cin >> repeat;
    for (int i = 0; i < repeat; i++) {
        std::cin >> h >> w >> n;
        int height = (n % h == 0) ? h : (n % h);
        int width = (n % h == 0) ? (n / h) : (n / h +1);
        if (width >= 10) {
            std::cout << height << width << '\n';
        } else {
            std::cout << height << 0 << width << '\n';
        }
    }
    return 0;
}