#include <iostream>

int main()
{
    int num;
    std::cin >> num;
    std::pair<int, int> array[num];

    for (int i = 0; i < num; i++) {
        std::cin >> array[i].first >> array[i].second;
    }
    int rank = 0;
    for (int i = 0; i < num; i++) {
        rank = 1;
        for (int j = 0; j < num; j++) {
            if (array[j].first > array[i].first && array[j].second > array[i].second) {
                rank++;
            }
        }
        std::cout << rank << ' ';
    }

    return 0;
}