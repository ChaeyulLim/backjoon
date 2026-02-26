#include <iostream>

int main()
{
    int a, b, c, temp;

    while (true) {
        
        std::cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) {
            break;
        }

        if (c < a) {
            temp = c;
            c = a;
            a = temp;
        }
        if (c < b) {
            temp = c;
            c = b;
            b = temp;
        }

        std::cout << (((a*a) + (b*b) == (c*c)) ? "right\n" : "wrong\n");
    }

    return 0;
}