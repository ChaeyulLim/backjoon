#include <iostream>
#include <string>
int main()
{
    std::string text[5];
    int max = 0;
    for (int i = 0; i < 5; i++) {
        std::cin >> text[i];
        if (text[i].size() > max) {
            max = text[i].size();
        }
    }
    
    for (int i = 0; i < max; i++) {
        for (std::string data : text) {
            if (i >= data.size()) {
                continue;
            }
            std::cout << data[i];
        }
    }
    
    return 0;
}