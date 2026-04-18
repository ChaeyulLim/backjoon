#include <iostream>

int main()
{
    int num, area;;
    std::cin >> num;

    for (int i = num -1; i >= 0; i--) {
        area = (num - i -1);
        for (int j = 0; j < area; j++) {
            std::cout << ' ';
        }
        for (int j = 0; j < (i * 2 +1); j++) {
            std::cout << '*';
        }
        std::cout << '\n';
    }

    return 0;
}