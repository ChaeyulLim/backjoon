#include <iostream>

int main()
{
    int num, sum = 1, count = 1;
    std::cin >> num;
    if (num == 1) {
        std::cout << num;
        return 0;
    }

    while (num > sum) {
        count++;
        sum += 6 * (count -1);
    }

    std::cout << count;
    return 0;
}