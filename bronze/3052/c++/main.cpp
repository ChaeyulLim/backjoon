#include <iostream>

int main()
{
    int count = 0, array[10];
    for (int i = 0; i < 10; i++) {
        std::cin >> array[i];
        array[i] = array[i] % 42;
    }
    for (int i = 0; i < 10; i++) {
        for (int j = i +1; j < 10; j++) {
            if (array[i] == array[j] && array[i] != -1) {
                array[j] = -1;
            }
        }
        if (array[i] != -1) {
            array[i] = -1;
            count++;
        }
    }
    std::cout << count;
    return 0;
}