#include <iostream>

int main()
{
    short num, count = 0;
    std::cin >> num;
    num = 1000 - num;
    count += num / 500;

    num %= 500;
    count += num / 100;

    num %= 100;
    count += num / 50;

    num %= 50;
    count += num / 10;

    num %= 10;
    count += num / 5;
    
    num %= 5;
    count += num / 1;

    std::cout << count;

    return 0;
}