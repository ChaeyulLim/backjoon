#include <iostream>

int main()
{
    int mY, mX;
    std::cin >> mY >> mX;

    int case1, case2, resultCase = 250, minCase; // 최대 쓰레기값
    char board[mY][mX], piece;
    bool isCheck;
    
    for (int y = 0; y < mY; y++) {
        for (int x = 0; x < mX; x++) {
            std::cin >> board[y][x];
        }
    }

    for (int _y = 0; _y <= mY - 8; _y++) {
        for (int _x = 0; _x <= mX -8; _x++) {
            case1 = 0;
            case2 = 0;
            for (int y = _y; y < _y +8; y++) {
                for (int x = _x; x < _x +8; x++) {
                    
                    if (y % 2 == 0) {
                        piece = (x % 2 == 0) ? 'B' : 'W';
                    } else {
                        piece = (x % 2 == 0) ? 'W' : 'B';
                    }

                    if (board[y][x] == piece) {
                        case2++;
                    } else {
                        case1++;
                    }
                }
            }
            minCase = (case1 < case2) ? case1 : case2;
            resultCase = (minCase < resultCase) ? minCase : resultCase;
        }
    }
    std::cout << resultCase;
    return 0;
}