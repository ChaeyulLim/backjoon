#include <iostream>

int sqrt(int num)
{
    if (2 > num) { return 0; } 
    else if (num == 2) { return 1; }
    else if (num % 2 == 0) { return 0; }

    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) { return 0; }
    }

    return 1;
}

int main()
{
    int n, num, count = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> num;
        count += sqrt(num);
    }
    std::cout << count;
    return 0;
}