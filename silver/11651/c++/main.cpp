#include <iostream>
#include <algorithm>
#include <utility>

int main()
{
    int n;
    std::cin >> n;
    std::pair<int, int> array[n];

    for (int i = 0; i < n; i++) {
        std::cin >> array[i].second >> array[i].first ;
    }

    std::sort(array, array +n);

    for (int i = 0; i < n; i++) {
        std::cout << array[i].second << " " << array[i].first << '\n';
    }

    return 0;
}