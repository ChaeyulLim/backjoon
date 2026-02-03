#include <iostream>
#include <algorithm>
#include <utility>

int main()
{
    int n;
    std::cin >> n;
    std::pair<int, int> array[n];

    for (int i = 0; i < n; i++) {
        std::cin >> array[i].first >> array[i].second ;
    }

    std::sort(array, array +n);

    for (int i = 0; i < n; i++) {
        std::cout << array[i].first << " " << array[i].second << '\n';
    }

    return 0;
}