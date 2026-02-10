#include <iostream>
#include <set>
#include <string>

struct func {
    bool operator() (const std::string& a, const std::string & b) const {
        return a > b;
    }
};


int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::set<std::string, func> log;
    std::string text, access;
    for (int i = 0; i < n; i++) {
        std::cin >> text >> access;
        if (access == "enter") {
            log.insert(text);
        } else {
            log.erase(text);
        }
    }

    for (auto data : log) {
        std::cout << data << '\n';
    }

    return 0;
}