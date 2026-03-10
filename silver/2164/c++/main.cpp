#include <iostream>
#include <queue>

int main()
{
    int n, data;
    std::cin >> n;

    std::queue<int> q;

    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    while (q.size() > 1) {
        q.pop();
        data = q.front();
        q.push(data);
        q.pop();
    }
    std::cout << q.front();




    return 0;
}