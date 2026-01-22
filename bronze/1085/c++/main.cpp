#include <iostream>

int main()
{
    int x, y, w, h;
    std::cin >> x >> y >> w >> h;
    int resultX, resultY;
    if (x > (w - x)) {
        resultX = (w - x);
    } else {
        resultX = x;
    }

    if (y > (h - y)) {
        resultY = (h - y);
    } else {
        resultY = y;
    }

    if (resultX > resultY) {
        std::cout << resultY;
    } else {
        std::cout << resultX;
    }

    return 0;
}