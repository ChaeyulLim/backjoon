#include <iostream>
#include <algorithm>
#include <utility>


bool comp(const std::pair<int, int>& a, const std::pair<int, int>& b)
{
    return a.second < b.second;
}

int main()
{
    int n;
    std::cin >> n;
    int bucket[n];
    std::pair<int, int> pos[n];
    for (int i = 0; i < n; i++) {
        std::cin >> pos[i].second;
        pos[i].first = i;
    }

    std::sort(pos, pos+n, comp);
    
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (i > 0 && pos[i].second == pos[i-1].second) {
            bucket[pos[i].first] = bucket[pos[i-1].first];
        } else {
            bucket[pos[i].first] = count;
            count++;
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << bucket[i] << ' ';
    }
    
    return 0;
}