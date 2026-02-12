#include <iostream>
#include <string>
#include <set>
#include <unordered_map>

int main()
{
    int n, m;
    std::set<std::string> human;
    std::unordered_map<std::string, int> list;
    std::string name;

    std::cin >> n >> m;
    for (int i = 0; i < n; i++) {
        std::cin >> name;
        list[name] = 1;
    }
    int count = 0;
    for (int i = 0; i < m; i++) {
        std::cin >> name;
        if (list.count(name)) {
            human.insert(name);
            count++;
        }
    }
    std::cout << count << '\n';
    for (std::string name : human) {
        std::cout << name << '\n';
    }

    return 0;
}