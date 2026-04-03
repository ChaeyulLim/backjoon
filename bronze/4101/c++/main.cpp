#include <iostream>

int main()
{
    int a, b;
    do {
        std::cin >> a >> b;
        if (a == b && a == 0) { break; }
        if (a > b) {
            std::cout << "Yes\n";
        } else {
            std::cout << "No\n";
        }
    } while (true);

    return 0;
}