#include <iostream>

int main()
{
    int n, _5kg, _3kg;
    std::cin >> n;
    
    _5kg = n / 5;
    if (_5kg > 0) {
        n %= 5;
    }

    while (n % 3 != 0) {
        if (_5kg > 0) {
            _5kg--;
            n += 5;
        } else {
            std::cout << -1;
            return 0;
        }
    }
    _3kg = n / 3;
    std::cout << _5kg + _3kg;

    return 0;
}