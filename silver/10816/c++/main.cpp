#include <iostream>
#include <unordered_map>

int main()
{

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n, m, num;
    std::unordered_map<long long, int> buffer;

    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> num;
        buffer[num] = (buffer.count(num)) ? buffer[num] + 1 : 1;
    }

    std::cin >> m;
    int array[m];

    for (int i = 0; i < m; i++) {
        std::cin >> num;
        array[i] = (buffer.count(num)) ? buffer[num] : 0;
    }
    
    std::cout << array[0];
    for (int i = 1; i < m; i++) {
        std::cout << ' ' << array[i];
    }

    return 0;
}