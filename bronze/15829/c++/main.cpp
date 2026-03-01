#include <iostream>
#include <string>

int main()
{
    int num;
    std::cin >> num;
    
    std::string input;
    std::cin >> input;

    long long r = 1, hash = 0, mod = 1234567891, data;

    for (int i = 0; i < num; i++) {
        data = static_cast<int>(input[i]) - 96;
        hash = (hash + (data * r)) % mod;
        r = ((r * 31) % mod);
    }

    std::cout << hash;


    return 0;
}