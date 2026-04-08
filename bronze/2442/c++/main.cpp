#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    int area = num;
    for (int i = 0; i < num; i++) {
        area--;
        for (int j = 0; j < area; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < i * 2 +1; j++) {
            std::cout << "*";
        }
        std::cout << '\n';
    }

    return 0;
}