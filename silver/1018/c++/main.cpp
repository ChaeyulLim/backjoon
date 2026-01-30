#include <iostream>

int main()
{
    int mY, mX;
    std::cin >> mY >> mX;

    int case1 = 0, case2 = 0;
    int minCase = -1;

    char board[mY][mX];

    for (int y = 0; y < mY; y++) {
        for (int x = 0; x < mX; x++) {
            std::cin >> board[y][x];
        }
    }

    for (int minY = 0; minY <= mY - 8; minY++) {
        for (int minX = 0; minX <= mX - 8; minX++) {
            case1 = 0;
            case2 = 0;
            for (int y = minY; y < minY+8; y++) {
                for (int x = minX; x < minX+8; x++) {
                    if (y % 2 == 0) {
                        if (x % 2 == 0) {
                            if (board[y][x] == 'B') { 
                                case2++; 
                            }
                            else {
                                case1++;
                            }
                        } else {
                            if (board[y][x] == 'W') {
                                case2++;
                            }
                            else {
                                case1++;
                            }
                        }
                    } else {
                        if (x % 2 == 0) {
                            if (board[y][x] == 'W') { case2++; }
                            else { case1++; }
                        } else {
                            if (board[y][x] == 'B') { case2++;}
                            else { case1++; }
                        }
                    }

                }
            }
            if (minCase == -1) {
                minCase = case1;
            }
            if (case1 < case2 && case1 < minCase) {
                minCase = case1;
            } else if (case1 > case2 && case2 < minCase) {
                minCase = case2;
            }
        }
    }

    std::cout << minCase;

    return 0;
}