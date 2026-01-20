#include <iostream>

int sqrt(int num)
{
    if (2 > num) { return 0; } 
    else if (num == 2) { return num; }
    else if (num % 2 == 0) { return 0; }

    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) { return 0; }
    }

    return num;
}

int main()
{

    int n, m, count = 0, min = -1;
    std::cin >> n >> m;

    for (int i = n; i <= m; i++) {
        count += sqrt(i);
        if (min == -1 && count > 0) {
            min = count;
        }
    }
    if (min == -1) {
        std::cout << -1;
    } else {
        std::cout << count << '\n' << min;

    }
    return 0;
}