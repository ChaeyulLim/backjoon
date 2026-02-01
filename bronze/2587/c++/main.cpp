#include <iostream>

int main()
{
    int array[5], temp, result = 0;
    
    for (int i = 0; i < 5; i++) {
        std::cin >> array[i];
        result += array[i];
    }
    for (int i = 0; i < 5 -1; i++) {
        for (int j = i+1; j < 5; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    
    std::cout << result /5 << '\n' << array[2];


    return 0;
}