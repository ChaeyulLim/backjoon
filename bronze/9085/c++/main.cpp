#include <iostream>

int main()
{
    int loop, temp, num, sum = 0;
    std::cin >> loop;
    for (int i = 0; i < loop; i++) {
        std::cin >> num;
        sum = 0;
        for (int j = 0; j < num; j++) {
            std::cin >> temp;
            sum += temp;
        }
        std::cout << sum << '\n';
    }
    return 0;
}