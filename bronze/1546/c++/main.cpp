#include <iostream>

int main()
{
    int num, max = 0;
    float sum = 0;
    std::cin >> num;
    int array[num];
    for (int i = 0; i < num; i++) {
        std::cin >> array[i];
        if (array[i] > max) {
            max = array[i];
        }
    }
    for (int i = 0; i < num; i++) {
        sum += 1.0 * array[i] / max * 100;
    }
    std::cout << sum / num;
    return 0;
}