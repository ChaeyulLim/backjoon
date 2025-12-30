#include <iostream>

int main()
{
    int num0, num1;
    do {
        std::cin >> num0 >> num1;
        if (num0 == num1 && ! num0) {return 0;}
        std::cout << num0 + num1 << '\n';
    } while (true);

    return 0;
}