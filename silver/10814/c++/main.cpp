#include <iostream>
#include <algorithm>
#include <utility>
#include <string>
#include <vector>

bool comp(const std::pair<int, std::string>& a, const std::pair<int, std::string>& b)
{
    return a.first < b.first;
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<std::pair<int, std::string>> user(n);

    for (int i = 0; i < n; i++) {
        std::cin >> user[i].first >> user[i].second;
    }

    std::stable_sort(user.begin(), user.end(), comp);

    for (int i = 0; i < n; i++) {
        std::cout << user[i].first << " " << user[i].second << '\n';
    }

    return 0;
}

