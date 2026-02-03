#include <iostream>

int main()
{
    unsigned int num;
    int temp;
    int array[10] = {0};
    std::cin >> num;

    while (num > 0) {
        array[num % 10]++;
        num /= 10;
    }
    
    for (int i = 9; i >= 0; i--) {
        if (array[i] > 0) {
            for (int _ = 0; _ < array[i]; _++) {
                std::cout << i;
            }
        }
    }
    
    return 0;
}