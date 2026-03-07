#include <iostream>

int main()
{
    int num, count = 0;
    std::cin >> num;

    while (num >= 5) {
        num /= 5;
        count += num;
    }

    std::cout << count;

    return 0;
}