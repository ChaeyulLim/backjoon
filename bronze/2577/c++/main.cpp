#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    long long int result = a * b * c;
    int answer[10] = {0};
    while (result > 0) {
        answer[result % 10]++;
        result /= 10;
    }

    for (int i : answer) {
        std::cout << i << '\n';
    }

    return 0;
}