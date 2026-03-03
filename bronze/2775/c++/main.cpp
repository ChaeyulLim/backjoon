#include <iostream>

int main()
{

    int num;
    int k, n;

    std::cin >> num;

    for (int _ = 0; _ < num; _++) {

        std::cin >> k >> n;
        
        int data[n] = {0};
        for (int i = 0; i <= k; i++) {

            for (int j = n; j > 0; j--) {
                if (i == 0) {
                    data[j-1] = j;
                    continue;
                }

                for (int l = 0; l < j; l++) {
                    data[j] += data[l];
                }

            }
            
        }
        std::cout << data[n -1] << std::endl;
    }

    return 0;
}