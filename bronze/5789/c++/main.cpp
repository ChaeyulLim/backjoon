#include <iostream>
#include <string>

int main()
{  
    int num, temp;
    std::string context;
    std::cin >> num;
    for (int i = 0; i < num; i++) {
        std::cin >> context;
        temp = context.size() / 2;
        if (context[temp -1] == context[temp]) {
            std::cout << "Do-it\n";
        } else {
            std::cout << "Do-it-Not\n";
        }
    }
    
    return 0;    
}