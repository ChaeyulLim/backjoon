#include <iostream>
#include <string>

int main()
{
    std::string name;
    int array[26] = {
        -1, -1, -1, -1, -1, 
        -1, -1, -1, -1, -1, 
        -1, -1, -1, -1, -1, 
        -1, -1, -1, -1, -1, 
        -1, -1, -1, -1, -1, -1};
    std::cin >> name;
    int index;
    for (int i = 0; i < name.size(); i++) {
        index = static_cast<int>(name[i]) - 97;
        if (array[index] == -1){
            array[index] = i;
        }
    }
    for (int data : array) {
        std::cout << data << " ";
    }
    return 0;
}