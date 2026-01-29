#include <iostream>

int main()
{
    
    int n;
    std::cin >> n;
    int sum, temp;
    for (int i = n/2; i < n; i++) {
        temp = i;
        sum = i;
        while (temp) {
            sum += temp % 10;
            temp /= 10;
        }

        if (n == sum) {
            std::cout << i;
            return 0;
        }
    }
    std::cout << 0;

    return 0;
}