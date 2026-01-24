#include <iostream>

int main()
{
    int a, b, c, sum, target;

    while (1) {
        std::cin >> a >> b >> c;
        if (!a && !b && !c) {
            break;
        }
        sum = 0;
        target = 0;


        if (a > b && a > c) {
            target = a;
            sum = b + c;
        } else if (b > a && b > c) {
            target = b;
            sum = a + c;
        } else {
            target = c;
            sum = a + b;
        }
        if (target >= sum) {
            std::cout << "Invalid\n";
            continue;
        }


        if (a == b && a == c && b == c) {
            std::cout << "Equilateral\n";
        } else if (a == b || a == c || b == c) {
            std::cout << "Isosceles\n";
        } else {
            std::cout << "Scalene\n";
        }
    }


    return 0;
}