#include <iostream>

int main()
{
    int num, rep, min, max, temp;
    std::cin >> num;
    for (int i = 0; i < num; i++) {
        std::cin >> rep;
        min = 99; max = 0;
        for (int j = 0; j < rep; j++) {
            std::cin >> temp;
            if (min > temp) { min = temp; }
            if (max < temp) { max = temp; }
        }
        std::cout << ((max - min) * 2) << '\n';
    }

    return 0;
}