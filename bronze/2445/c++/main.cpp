#include <iostream>

int main()
{
    int num, temp;
    std::cin >> num;
    int i;
    for (i = 1; i <= num; i++) {
        temp = (num * 2) - (i * 2);
        for (int j = 0; j < i; j++) {
            std::cout << '*';
        }
        for (int j = 0; j < temp; j++) {
            std::cout << ' ';
        }
        for (int j = 0; j< i; j++) {
            std::cout << '*';
        }
        std::cout << '\n';
    }
    for (i = num -1; i > 0; i--) {
        temp = (num * 2) - (i * 2);
        for (int j = 0; j < i; j++) {
            std::cout << '*';
        }
        for (int j = 0; j < temp; j++) {
            std::cout << ' ';
        }
        for (int j = 0; j< i; j++) {
            std::cout << '*';
        }
        std::cout << '\n';
    }


    return 0;
}