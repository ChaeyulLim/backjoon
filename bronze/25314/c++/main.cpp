#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    for (int i = num; i > 0; i-=4) {
        std::cout << "long ";
    }
    std::cout << "int";
    return 0;
}