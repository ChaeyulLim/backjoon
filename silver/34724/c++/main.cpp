#include <iostream>


int main()
{

    int n, m;
    std::cin >> n >> m;
    int array [n][m];
    char data[m];



    for (int y = 0; y < n; y++) {
        std::cin >> data;

        for (int x = 0; x < m; x++) {
            array[y][x] = static_cast<int>(data[x]) - static_cast<int>('0');
        }
    }



    bool stop = false;
    for (int y = 1; y < n; y++) {
        if (stop) {
            break;
        }
        for (int x = 1; x < m; x++) {
            if (array[y][x] == 1) {

                /*
                    1 1 0
                    1 t 0
                    0 0 0
                */
                if ((y -1) > -1 && (x -1) > -1) {
                    if (array[y-1][x-1] == 1 && array[y-1][x] == 1 && array[y][x-1] == 1) {
                        // 종양
                        stop = true;
                        break;
                    }
                }

                /*
                    0 1 1
                    0 t 1
                    0 0 0
                */
                if ((y -1) > -1 && (x +1) < m) {
                    if (array[y-1][x] == 1 && array[y-1][x+1] == 1 && array[y][x+1] == 1) {
                        // 종양
                        stop = true;
                        break;
                    } 
                }


                /*
                    0 0 0
                    1 t 0
                    1 1 0
                */
                if ((y +1) < n && (x -1) > -1) {
                    if (array[y][x-1] == 1 && array[y+1][x-1] == 1 && array[y+1][x] == 1) {
                        // 종양
                        stop = true;
                        break;
                    }
                }

                /*
                    0 0 0
                    0 t 1
                    0 1 1
                */
                if ((y +1) < n && (x +1) < m) {
                    if (array[y][x+1] == 1 && array[y+1][x] == 1 && array[y+1][x+1] == 1) {
                        // 종양
                        stop = true;
                        break;
                    }
                }


            }
        }
    }

    std::cout << (stop ? 1 : 0);


    return 0;
}