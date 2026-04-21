#include <iostream>

int main()
{
    int num;
    std::cin >> num;
    int g, c, n;
    int ground[4] = {0, 0, 0, 0};
    for (int i = 0; i < num; i++) {
        std::cin >> g >> c >> n;
        if (g > 1) {
            switch (c) {
                case 1:
                case 2:
                    ground[0]++;
                    break;
                case 3:
                    ground[1]++;
                    break;
                case 4:
                    ground[2]++;
            }
        } else {
            ground[3]++;
        }
    }

    for (int data : ground) {
        std::cout << data << '\n';
    }

    return 0;
}