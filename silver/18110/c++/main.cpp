#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;

    if (n == 0) {
        std::cout << 0;
        return 0;
    }

    std::vector<int> array(n);
    for (int i = 0; i < n; i++) {
        std::cin >> array[i];
    }

    std::sort(array.begin(), array.end());

    int cut = (n * 15 + 50) / 100;
    int trimmed = n - cut * 2;

    if (trimmed <= 0) {
        std::cout << 0;
        return 0;
    }

    int sum = 0;
    for (int i = cut; i < n - cut; i++) {
        sum += array[i];
    }

    std::cout << (2 * sum + trimmed) / (2 * trimmed);

    return 0;
}