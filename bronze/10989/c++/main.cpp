#include <iostream>

int main()
{

    int n;
    std::cin >> n;
    int array[10001] = {0};
    int count;

    for (int i = 0; i < n; i++) {
        std::cin >> count;
        array[count]++;
    }
    for (int i = 1; i <= 10000; i++) {
        for (int j = 0; j < array[i]; j++) {
            std::cout << i << '\n';
        }
    }

}