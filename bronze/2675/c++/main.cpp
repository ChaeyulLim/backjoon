#include <iostream>
#include <string>
int main()
{
    int T, R;
    std::string text;
    std::cin >> T;
    for (int count = 0; count < T; count++) {
        std::cin >> R >> text;
        for (char data : text) {
            for (int i = 0; i < R; i++) {
                std::cout << data;
            }
        } std::cout << '\n';
    }
    return 0;
}