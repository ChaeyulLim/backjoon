#include <iostream>
#include <string>
int main()
{  
    int num;
    std::string numbers;
    std::cin >> num;
    std::cin >> numbers;
    int sum = 0;
    for (int i = 0; i < num; i++) {
        sum += static_cast<int>(numbers[i]) - 48;
    }
    std::cout << sum;
    return 0;
}