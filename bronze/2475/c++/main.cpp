#include <iostream>

int main()
{
    int array[5], result = 0;

    for (int i = 0; i < 5; i++) {
        std::cin >> array[i];
        array[i] *= array[i];
        result += array[i];
    }
    
    std::cout << (result % 10);

    return 0;
}