#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

int main()
{
    int n, m;
    std::cin >> n >> m;
    
    std::set<int> A;
    std::set<int> B;
    std::vector<int> result;

    int num;
    for (int i = 0; i < n; i++) {
        std::cin >> num;
        A.insert(num);
    }
    for (int i = 0; i < m; i++) {
        std::cin >> num;
        B.insert(num);
    }
    
    std::set_difference(A.begin(), A.end(), B.begin(), B.end(), back_inserter(result));
    std::set_difference(B.begin(), B.end(), A.begin(), A.end(), back_inserter(result));
    
    std::cout << result.size();

    return 0;
}