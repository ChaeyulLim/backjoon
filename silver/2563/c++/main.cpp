#include <iostream>

void create(bool array[][100], int x, int y)
{
    for (int i = y; i < y +10; i++) {
        for (int j = x; j < x +10; j++) {
            array[i][j] = true;
        }
    }    
}


int main()
{
    int num, x, y;
    bool array[100][100];
    
    for (int y = 0; y < 100; y++) {
        for (int x = 0; x < 100; x++) {
            array[y][x] = false;
        }
    }
    std::cin >> num;
    for (int i = 0; i < num; i++) {
        std::cin >> x >> y;
        create(array, x, y);
    }
    int count = 0;
    for (int y = 0; y < 100; y++) {
        for (int x = 0; x < 100; x++) {
            if (array[y][x]) {
                count++;
            }
        } 
    }
    std::cout << count;
    return 0;
}