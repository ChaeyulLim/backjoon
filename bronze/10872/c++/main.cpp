#include <iostream>

int factory(int n)
{
    if (n == 0) {
        return 1;
    }
    return factory(n -1) * n;
}


int main()
{
    int n;
    std::cin >> n;
    std::cout << factory(n);

    return 0;
}