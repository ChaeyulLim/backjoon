#include <iostream>

int main()
{
    int num;
    std::cin >> num;
    
    while (num > 1) {
        for (int i = 2; i <= num; i++) {
            if (num % i == 0) {
                std::cout << i << '\n';
                num /= i;
                break;
            }
        }
    }
    

    return 0;
}