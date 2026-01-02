#include <iostream>

int main()
{
    int n, m, i, j, temp;
    std::cin >> n >> m;

    int array[n];

    for (int i = 0; i < n; i++) {
        array[i] = i +1;
    }

    for (int count = 0; count < m; count++) {
        std::cin >> i >> j;
        temp = array[i - 1];
        array[i - 1] = array[j - 1];
        array[j - 1] = temp;
    }

    for (int data : array) {
        std::cout << data << ' ';
    }

    return 0;
}