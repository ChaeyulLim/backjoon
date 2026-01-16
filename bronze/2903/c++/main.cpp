#include <iostream>

int main()
{
    int num;
    std::cin >> num;
    int result = ((1 << num) +1);
    std::cout << result * result;
    return 0;
}