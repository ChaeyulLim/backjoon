#include <iostream>
#include <string>

int main()
{
    int n, result, count;
    std::cin >> n;
    
    std::string question;
    for (int i = 0; i < n; i++) {
        std::cin >> question;
        result = 0, count = 0;
        for (int j = 0; j < question.size(); j++) {
            count = (question[j] == 'O') ? count + 1 : 0;
            result += count;
        }
        std::cout << result << std::endl;

    }
    return 0;
}