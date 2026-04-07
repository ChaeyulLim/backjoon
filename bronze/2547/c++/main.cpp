#include <iostream>

int main()
{

    int numit, num;
    long long temp;
    __int128 sum = 0;
    std::cin >> numit;

    for (int i = 0; i < numit; i++) {
        sum = 0;
        std::cin >> num;
        for (int _ = 0; _ < num; _++) {
            std::cin >> temp;
            sum += temp;
        }
        std::cout << ((sum % num == 0) ? "YES" : "NO") << '\n';
    }

    return 0;
}
