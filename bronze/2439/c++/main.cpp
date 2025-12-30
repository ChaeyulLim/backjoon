#include <iostream>

int main()
{
    int num, area;
    std::cin >> num;
    
    for (int i = 1; i <= num; i++) {
        area = num - i;
        for (int j = 0; j < area; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < i; j++) {
            std::cout << "*";
        }
        std::cout << '\n';

    }
    return 0;
}