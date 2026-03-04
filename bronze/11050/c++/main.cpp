#include <iostream>

int fectorial(int n)
{
    if (n <= 1) {
        return 1;
    }
    return n * fectorial(n - 1);
}

int main()
{
    int n, k;
    std::cin >> n >> k;
    
    std::cout << fectorial(n) / (fectorial(k) * fectorial(n - k));


    return 0;
}