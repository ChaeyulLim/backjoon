#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


bool comp(const std::string& b, const std::string& e)
{

    if (b.size() != e.size()) {
        return b.size() < e.size();
    } else {
        return b < e;
    }
}


int main()
{
    int n;
    std::cin >> n;
    std::vector<std::string> text(n);
    
    for (int i = 0; i < n; i++) {
        std::cin >> text[i];
    }
    
    std::sort(text.begin(), text.end());
    text.erase(std::unique(text.begin(), text.end()), text.end());

    std::sort(text.begin(), text.end(), comp);

    for (int i = 0; i < text.size(); i++) {
        std::cout << text[i] << '\n';
    }


    return 0;
}