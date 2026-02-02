#include <iostream>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    int array[n];

    for (int i = 0; i < n; i++) {
        std::cin >> array[i];
    }

    std::sort(array, array +n);

    for (int data : array) {
        std::cout << data << '\n';
    }
    
    return 0;
}