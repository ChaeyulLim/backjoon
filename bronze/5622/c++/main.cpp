#include <iostream>
#include <string>

int main()
{
    std::string numbers;
    std::cin >> numbers;
    int count = 0;

    for (auto data : numbers) {
        if (data == 'A' || data == 'B' || data == 'C') {
            count += 3;
        } else if (data == 'D' || data == 'E' || data == 'F') {
            count += 4;
        } else if (data == 'G' || data == 'H' || data == 'I') {
            count += 5;
        } else if (data == 'J' || data == 'K' || data == 'L') {
            count += 6;
        } else if (data == 'M' || data == 'N' || data == 'O') {
            count += 7;
        } else if (data == 'P' || data == 'Q' || data == 'R' || data == 'S') {
            count += 8;
        } else if (data == 'T' || data == 'U' || data == 'V') {
            count += 9;
        } else if (data == 'W' || data == 'X' || data == 'Y' || data == 'Z') {
            count += 10;
        } else {
            return 1;
        }
    }
    std::cout << count;
    
    
    return 0;
}