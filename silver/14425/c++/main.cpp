#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::string text;
    std::unordered_set<std::string> s;
    
    for (int i = 0; i < n; i++) {
        std::cin >> text;
        s.insert(text);
    }
    
    int count = 0;
    for (int i = 0; i < m; i++) {
        std::cin >> text;
        count += s.count(text);
    }

    std::cout << count;

    return 0;
}