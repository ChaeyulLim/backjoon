#include <iostream>
#include <algorithm>

int main()
{
    int n, data_sum = 0, result = 0;;
    std::cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        std::cin >> array[i];
    }
    
    std::sort(array, array+n);

    for (int data : array) {
        data_sum += data;
        result += data_sum;
    }
    std::cout << result;
    return 0;

}