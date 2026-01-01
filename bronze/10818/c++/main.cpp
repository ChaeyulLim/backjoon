#include <iostream>
#include <vector>
int main()
{
    int num, min, max;
    std::cin >> num;
    std::vector<int> array(num);
    for (int i = 0; i < num; i++) {
        std::cin >> array[i];
    }
    min = array[0];
    max = array[0];

    for (int i = 0; i < num; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    std::cout << min << " " << max;

    return 0;
}