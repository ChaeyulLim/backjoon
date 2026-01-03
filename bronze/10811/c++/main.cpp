#include <iostream>

int main()
{
    int n, m, b, e, temp;
    std::cin >> n >> m;

    int array[n];
    for (int i = 0; i <= n; i++) {
        array[i] = i +1;
    }

    for (int _ = 0; _ < m; _++) {
        std::cin >> b >> e;
        for (int i = 0; i < ((e - b +1) / 2); i++) {
            temp = array[b + i -1];
            array[b + i -1] = array[e - i -1];
            array[e - i -1] = temp;
        }
    }

    for (int data : array) {
        std::cout << data << " ";
    }
    return 0;
}