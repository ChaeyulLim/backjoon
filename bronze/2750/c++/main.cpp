#include <iostream>

int main()
{
    int n, temp;
    std::cin >> n;
    int array[n];
    
    for (int i = 0; i < n; i++) {
        std::cin >> array[i];
    }

    for (int i = 0; i < n -1; i++) {
        for (int j = i; j < n; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for (int data : array) {
        std::cout << data << '\n';
    }

    return 0;
}