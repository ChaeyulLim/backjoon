#include <iostream>

int main()
{
    int array[30], num, resert[2], count = 0;
    for (int i = 0; i < 30; i++) {
        array[i] = i +1;
    }
    for (int i = 0; i < 28; i++) {
        std::cin >> num;
        array[num -1] = 0;
    }
    
    for (int data : array) {
        if (data != 0) {
            resert[count++] = data;
        }
    }
    if (resert[0] > resert[1]) {
        std::cout << resert[1] << '\n' << resert[0];
    } else {
        std::cout << resert[0] << '\n' << resert[1];
    }
    return 0;
}