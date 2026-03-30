#include <iostream>

int main()
{
    int num, temp, count = 0;

    std::cin >> num;
    for (int i = 0; i < 5; i++) {
        std::cin >> temp;
        if (temp == num) {
            count++;
        }
    }
    std::cout << count;

    return 0;
}