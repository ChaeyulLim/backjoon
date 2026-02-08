#include <iostream>
#include <algorithm>
#include <utility>

bool comp(const std::pair<int, int>& a, const std::pair<int, int>& b)
{
    return a.second < b.second;
}


int main()
{
    int n, m;
    std::cin >> n;
    int card_n[n];

    for (int i = 0; i < n; i++) {
        std::cin >> card_n[i];
    }

    std::cin >> m;
    std::pair<int, int> card_m[m];
    int bucket[m];
    int count = 0;

    for (int i = 0; i < m; i++) {
        std::cin >> card_m[i].second;
        card_m[i].first = i;
        bucket[i] = 0;
    }

    std::sort(card_n, card_n + n);
    std::sort(card_m, card_m + m, comp);


    for (int i = 0; i < m; i++) {
        while (card_n[count] < card_m[i].second) {
            count++;
        }
        if (count >= n) {
            break;
        }
        if (card_n[count] == card_m[i].second) {
            bucket[card_m[i].first] = 1;
        }
    }

    for (int data : bucket) {
        std::cout << data << ' ';
    }


    return 0;
}