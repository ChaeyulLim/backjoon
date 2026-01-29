#include <iostream>

int main()
{
    int n, m;
    int sum, max = 0;

    std::cin >> n >> m;
    int card[n];
    
    for (int i = 0 ; i < n; i++) {
        std::cin >> card[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i +1; j < n; j++) {
            sum = card[i] + card[j];
            if (sum >= m) { continue; }
            for (int k = j +1; k < n; k++) {
                sum = card[i] + card[j] + card[k];
                if (max < sum && sum <= m) {
                    max = sum;
                }
            }
        }
    }
    std::cout << max;


    return 0;
}