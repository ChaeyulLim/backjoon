#include <iostream>
#include <string>

int Trans(char text) {
    int ascii = static_cast<int>(text);
    return (ascii < 58) ? (ascii - 48) :(ascii -55); 
}


int main()
{
    std::string N;
    int B;
    std::cin >> N >> B;

    int result = Trans(N[0]);

    for (int i = 1; i < N.size(); i++) {
        result = result * B + Trans(N[i]);
    }
    std::cout << result;

    return 0;
}