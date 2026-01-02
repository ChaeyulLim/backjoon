#include <iostream>
#include <vector>

int main()
{
    int n, m, i, j, k;
    std::cin >> n >> m;
    int array[n + 1] = {0};
    
    for (int count = 0; count < m; count++) {
        std::cin >> i >> j >> k;
        for (i; i <= j; i++) {
            array[i] = k;
        }
    }
    for (int i = 1; i <= n; i++) {
        std::cout << array[i] << ' ';
    }

    return 0;
}