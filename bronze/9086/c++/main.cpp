#include <iostream>
#include <string>

int main()
{
    int num;
    std::cin >> num;
    std::string array;
    
    for (int i = 0; i < num; i++) {
        std::cin >> array;
        std::cout << array[0] << array[array.size() -1] << std::endl;
    }

    return 0;
}