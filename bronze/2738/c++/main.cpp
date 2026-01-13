#include <iostream>

int main()
{
    int x, y;
    std::cin >> y >> x;
    int array[x*y * 2];
    int answer[x*y];

    for (int i = 0; i < (x*y *2); i++) {
        std::cin >> array[i];
    }
    
    for (int i = 0; i < (x*y); i++) {
        answer[i] = array[i] + array[x*y +i];

        if (i > 0 && i % 3 == 0) {
            std::cout << '\n';
        }
        if ((i +1) % 3 == 0) {
            std::cout << answer[i];
        } else {
            std::cout << answer[i] << ' ';
        }
    }
    return 0;
}