#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    for (int i = 1; i <= num; i++) {

        for (int j = num; j > i; j--) { // 공백
            std::cout << " ";
        }
        for (int j = 0; j < ((i -1) * 2) + 1; j++) { // 별찍기
            std::cout << "*";
        }
        std::cout << '\n';
    }

    for (int i = num -1; i > 0; i--) {
        for (int j = num; j > i; j--) {
            std::cout << " ";
        }
        for (int j = (i * 2) -1; j > 0; j--) {
            std::cout << '*';
        }
        std::cout << '\n';
    }

    return 0;
}