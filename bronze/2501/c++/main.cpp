#include <iostream>

int main()
{

    int N, K;
    std::cin >> N >> K;
    int count = 0, result = 0;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            count++;
        }
        if (count == K) {
            result = i;
            break;
        }
    }

    std::cout << result;

    return 0;
}