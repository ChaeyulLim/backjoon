#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n, p;
    std::cin >> p >> n;
    std::vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::sort(arr.begin(), arr.end());

    int index = 0;
    while (p < 200) {
        if (index == n) {
            break;
        }
        p += arr[index++];
    }

    std::cout << index;

    return 0;
}