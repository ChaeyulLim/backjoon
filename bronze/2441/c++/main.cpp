#include <iostream>

int main()
{   
    int num;
    std::cin >> num;

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << ' ';
        }
        for (int j = 0; j < num - i; j++) {
            std::cout << '*';
        }
        std::cout << '\n';
    }

    return 0;
}