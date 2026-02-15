#include <iostream>
#include <string>
#include <set>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::string text;
    std::cin >> text;
    std::set<std::string> result;

    for (int i = 0; i < text.size(); i++) {
        for (int len = 1; len <= text.size() - i; len++) {
            result.insert(text.substr(i, len));
        }
    }

    std::cout << result.size();
    return 0;
}