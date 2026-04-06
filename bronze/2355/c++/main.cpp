#include <iostream>

int main()
{
    long long a, b, temp;
    std::cin >> a >> b;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    long long result = (a + b) * (b - a +1) / 2;
    std::cout << result;
    return 0;
}