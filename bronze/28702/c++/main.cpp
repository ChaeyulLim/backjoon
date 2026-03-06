#include <iostream>
#include <string>

int main()
{
    std::string num[3];
    int number = 0;
    std::cin >> num[0] >> num[1] >> num[2];

    for (int i = 0; i < 3; i++) {
        number++;
        if (num[i] != "FizzBuzz" && num[i] != "Fizz" && num[i] != "Buzz") {
            number = std::stoi(num[i]);
        }
    }
    number++;
    if (number % 3 == 0 && number % 5 == 0) {
        std::cout << "FizzBuzz\n";
    } else if (number % 3 == 0 && number % 5 != 0) {
        std::cout << "Fizz\n";
    } else if (number % 3 != 0 && number % 5 == 0) {
        std::cout << "Buzz\n";
    } else {
        std::cout << number;
    }

    return 0;
}