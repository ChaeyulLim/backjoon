#include <iostream>
#include <unordered_map>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;
    std::cin >> n >> m;
    std::unordered_map<int, std::string> numberToString;
    std::unordered_map<std::string, int> stringToNumber;
    std::string name;

    for (int i = 1; i <= n; i++) {
        std::cin >> name;
        numberToString[i] = name;
        stringToNumber[name] = i;
    }

    std::string text;
    int num;
    for (int i = 0; i < m; i++) {
        std::cin >> text;
        if (std::isdigit(text[0])) {
            int num = std::stoi(text);
            std::cout << numberToString[num] << '\n';
        } else {
            std::cout << stringToNumber[text] << '\n';
        }
    }

    return 0;
}