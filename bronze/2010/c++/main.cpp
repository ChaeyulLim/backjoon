#include <iostream>

int main()
{
    int num, temp, sum = 0;
    std::cin >> num;

    for (int i = 0; i < num; i++) {
        std::cin >> temp;
        sum += temp;
    }
    std::cout << (sum - (num -1));
    return 0;
}