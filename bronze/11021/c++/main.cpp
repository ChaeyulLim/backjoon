#include <iostream>

int main()
{
    int N, num1, num2;
    std::cin >> N;
    for (int i = 1; i <= N; i++) {
        std::cin >> num1 >> num2;
        std::cout << "Case #" << i << ": " << num1 + num2 << '\n';
    }
    return 0;
}