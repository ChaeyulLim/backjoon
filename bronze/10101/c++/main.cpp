#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    int sum = a + b + c;

    if (a == 60 && a == b && a == c && b == c) {
        std::cout << "Equilateral";
    } else if (sum == 180) {
        if ((a == b) || (a == c) || (b == c)) {
            std::cout << "Isosceles";
        } else {
            std::cout << "Scalene";
        }
    } else {
        std::cout << "Error";
    }
    return 0;
}