#include <iostream>

int main()
{
    int array[9] = {0};
    int max = 0, index;
    for (int i = 0; i < 9; i++) {
        std::cin >> array[i];
        if (array[i] > max) {
            max = array[i];
            index = i;
        }
    }

    std::cout << max << '\n' << index + 1;

    return 0;
}