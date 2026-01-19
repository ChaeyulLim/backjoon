#include <iostream>
#include <string>

int main()
{

    int N = 0, result;

    std::string puts;
    while (N != -1) {
        std::cin >> N;
        if (N == -1) {
            break;
        }
        result = 1;
        puts = std::to_string(N) + " = 1";
        
        for (int i = 2; i < N; i++) {
            if (N % i == 0) {
                puts += " + " + std::to_string(i);
                result += i;
            }
        }
        
        if (result == N) {
            std::cout << puts << '\n';
        } else {
            std::cout << N << " is NOT perfect." << '\n';
        }
        
    }

    return 0;
}