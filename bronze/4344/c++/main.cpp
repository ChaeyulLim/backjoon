#include <iostream>

int main()
{
    int num;
    std::cin >> num;
    int n, temp, count;
    float score, result;
    for (int i = 0; i < num; i++) {
        std::cin >> n;
        score = 0.0f;
        count = 0;
        int arr[n];
        for (int j = 0; j < n; j++) {
            std::cin >> arr[j];
            score += arr[j];
        }
        score /= n;
        count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] > score) {
                count++;
            }
        }
        result = (float)count / n * 100;
        printf("%.3f%\n", result);
        
    }

    return 0;
}