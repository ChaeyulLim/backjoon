#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    int k = 1;
    while (k * (k +1) / 2 < num) { k++; }

    int pos = num - (k * (k-1)) /2;

    if (k % 2 == 0) {
        std::cout << pos << '/' << (k - pos +1);
    } else {
        std::cout << (k - pos +1) << '/' << pos;
    }

    return 0;
}