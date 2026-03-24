#include <iostream>
#include <map>

int main()
{   

    std::map<long long, long long> arr;
    
    long long num, temp;
    std::cin >> num;

    for (int i = 0; i < num; i++) {
        std::cin >> temp;
        if (arr.find(temp) != arr.end()) {
            arr[temp]++;
        } else {
            arr[temp] = 1;
        }
    }
    long long  max = 0, index;
    for (const auto& [key, value] : arr) {
        if (max < value) {
            index = key;
            max = value;
        }
    }
    std::cout << index;
    return 0;
}