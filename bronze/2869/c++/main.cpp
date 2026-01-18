#include <iostream>

int main()
{
    int A, B, V;
    std::cin >> A >> B >> V;
    std::cout << (V-A + A-B -1) / (A-B) +1;
    return 0;
}