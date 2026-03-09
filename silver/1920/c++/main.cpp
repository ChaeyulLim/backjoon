#include <iostream>
#include <map>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int num, data;
    std::cin >> num;
    std::map<int, int> base;
    for (int i = 0; i < num; i++) {
        std::cin >> data;
        base[data] = 1;
    }

    std::cin >> num;

    for (int i = 0; i < num; i++) {
        std::cin >> data;
        if (base.count(data)) {
            std::cout << "1\n";
        } else {
            std::cout << "0\n";
        }
    }

    return 0;
}