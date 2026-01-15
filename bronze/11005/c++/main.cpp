#include <iostream>
#include <string>

int main()
{
    int N, B;
    std::cin >> N >> B;
    std::string result;

    int digit = 0;
    
    while (N > 0) {
        digit = N % B;
        N = N / B;

        if (digit >= 10) {
            result = static_cast<char>(65 + digit -10) + result;
        } else {
            result = static_cast<char>(48 + digit) + result;
        }
    }
    std::cout << result;
    

    return 0;
}