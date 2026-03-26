#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    if (num >= 620 && num <= 780) {
        std::cout << "Red";
    } else if (num >= 590 && num < 620) {
        std::cout << "Orange";
    } else if (num >= 570 && num < 590) {
        std::cout << "Yellow";
    } else if (num >= 495 && num < 570) {
        std::cout << "Green";
    } else if (num >= 450 && num < 495) {
        std::cout << "Blue";
    } else if (num >= 425 && num < 450) {
        std::cout << "Indigo";
    } else {
        std::cout << "Violet";
    }

    return 0;
}