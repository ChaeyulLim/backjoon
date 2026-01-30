#include <iostream>

void test()
{
    // for (int y = 0; y < 9; y++) {
    //     for (int x = 0; x < 23; x++) {


    //         if (y % 2 == 0) {
    //             if (x % 2 == 0) {
    //                 std::cout << "B ";
    //             } else {
    //                 std::cout << "W ";
    //             }
    //         } else {
    //             if (x % 2 == 0) {
    //                 std::cout << "W ";
    //             } else {
    //                 std::cout << "B ";
    //             }
    //         }
    //     }
    //     std::cout << '\n';
    // }
    std::cout << '\n';
    for (int y = 0; y < 8; y++) {
        for (int x = 0; x < 8; x++) {


            if (y % 2 == 0) {
                if (x % 2 == 0) {
                    std::cout << "W ";
                } else {
                    std::cout << "B ";
                }
            } else {
                if (x % 2 == 0) {
                    std::cout << "B ";
                } else {
                    std::cout << "W ";
                }
            }
        }
        std::cout << '\n';
    }

}





int main()
{

    // test();
    // return 1;



    int mY, mX;
    std::cin >> mY >> mX;

    int case1 = 0, case2 = 0;
    int minCase = -1;
    // case 1 : 좌측 상단 B : 짝수가 B, 홀수가 W
    // case 2 : 좌측 상단 W : 짝수가 W, 홀수가 B


    char board[mY][mX];

    for (int y = 0; y < mY; y++) {
        for (int x = 0; x < mX; x++) {
            std::cin >> board[y][x];
        }
    }

    std::cout << "Start\n";
    for (int minY = 0; minY <= mY - 8; minY++) {
        for (int minX = 0; minX <= mX - 8; minX++) {
            case1 = 0;
            case2 = 0;
            // std::cout << minY << " " << minX << " : " << minY+8 << " " << minX+8 << '\n';
            for (int y = minY; y < minY+8; y++) {
                for (int x = minX; x < minX+8; x++) {


                    if (y % 2 == 0) {
                        if (x % 2 == 0) {
                            if (board[y][x] == 'B') { case2++; }
                            else { case1++; }
                        } else {
                            if (board[y][x] == 'W') { case2++;}
                            else { case1++; }
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
                    // std::cout <<"==============\n";
                    // std::cout << "case1 " << case1;
                    // std::cout << ", case2 " << case2 << '\n';
                    // if (case2 == 1) {
                    //     std::cout << board[y][x];
                    //     std::cout << '\n' << y << " " << x;
                    //     return 1;
                    // }


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
            std::cout << "==============================";
            std::cout << "Modify 1 : " << case1 << '\n';
            std::cout << "Modify 2 : " << case2 << '\n';
            std::cout << "==============================";
        }
    }
    std::cout << "End\n";

    for (int y = 0; y < mY; y++) {
        for (int x = 0; x < mX; x++) {
            std::cout << board[y][x] << ' ';
        }
        std::cout << '\n';
    }
    test();
    std::cout << "answer : " << minCase << '\n';


    return 0;
}