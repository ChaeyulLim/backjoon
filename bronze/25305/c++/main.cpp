#include <iostream>

int cutline(int *array, int n, int k)
{
    int temp;

    for (int i = 0; i < n -1; i++) {
        for (int j = i+1; j < n; j++) {
            if (array[i] < array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    return array[k -1];
}

int main()
{
    int n, k;
    std::cin >> n >> k;
    int array[n];
    for (int i = 0; i < n; i++) {
        std::cin >> array[i];
    }
    std::cout << cutline(array, n, k);
    
    return 0;
}

