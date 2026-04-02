#include <iostream>
#include <string>
int main()
{
    int num, result;
    std::cin >> num;

    std::string temp;
    for (int i = 0; i < num; i++) {
        std::cin >> temp;
        if (temp == "Algorithm") {
            std::cout << "204\n";
        } else if (temp == "DataAnalysis") {
            std::cout << "207\n";
        } else if (temp == "ArtificialIntelligence") {
            std::cout << "302\n";
        } else if (temp == "CyberSecurity") {
            std::cout << "B101\n";
        } else if (temp == "Network") {
            std::cout << "303\n";
        } else if (temp == "Startup") {
            std::cout << "501\n";
        } else if(temp == "TestStrategy") {
            std::cout << "105\n";
        }
    }

    return 0;
}