#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    int temp;
    int tempA = a, tempB = b;

    while (tempB) {
        temp = tempB;
        tempB = tempA % tempB;
        tempA = temp;
    }

    std::cout << tempA << '\n';
    std::cout << a * b / tempA;

    return 0;
}