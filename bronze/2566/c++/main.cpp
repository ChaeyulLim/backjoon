#include <iostream>

int main()
{

    int max = -1, num;
    int indexX, indexY;
    for (int i = 0; i < 81; i++) {
        std::cin >> num;
        if (num > max) {
            max = num;
            indexX = i % 9;
            indexY = i / 9;
        }
    }
    std::cout << max << '\n' << indexY +1 << ' ' << indexX +1;

    return 0;
}