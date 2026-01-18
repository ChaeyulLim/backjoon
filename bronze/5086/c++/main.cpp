#include <iostream>

int main()
{
    int A, B;
    do
    {
        std::cin >> A >> B;
        if (A == B && A == 0) {
            break;
        } else if (B % A == 0) {
            std::cout << "factor" << '\n';
        } else if (A % B == 0) {
            std::cout << "multiple" << '\n';
        } else {
            std::cout << "neither" << '\n';
        }
    } while (1);
    return 0;
}