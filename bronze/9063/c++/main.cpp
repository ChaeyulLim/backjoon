#include <iostream>

int main()
{
    int num, x, y;

    int minX = 100000, minY = 100000, maxX = -10000, maxY = -10000;
    std::cin >> num;
    for (int i = 0; i < num; i++) {
        std::cin >> x >> y;

        minX = (minX > x) ? x : minX;
        minY = (minY > y) ? y : minY;
        maxX = (maxX < x) ? x : maxX;
        maxY = (maxY < y) ? y : maxY;

    }

    std::cout << ((maxX - minX) * (maxY - minY));
        


    return 0;
}