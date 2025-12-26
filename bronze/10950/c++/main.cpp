#include <iostream>

int main()
{
    int n, num0, num1;
    std::cin >> n;
    for (int i = 0 ; i < n; i++) {
        std::cin >> num0 >> num1;
        std::cout << num0 + num1 << std::endl;
    }
    return 0;
}