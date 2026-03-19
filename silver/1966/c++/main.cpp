#include <iostream>
#include <queue>

int main()
{
    int num;
    std::cin >> num;
    

    for (int n = 0; n < num; n++) {
        std::queue<std::pair<int, int>> que;
        std::priority_queue<int> pq;
        std::pair<int, int> data;
        int max, target;
        std::cin >> max >> target;

        for (int i = 0; i < max; i++) {
            std::cin >> data.first;
            data.second = i;
            que.push(data);
            pq.push(data.first);
        }

        for (int i = 0; i < max; i++) {
            while (pq.top() != que.front().first) {
                que.push(que.front());
                que.pop();
            }
            if (que.front().second == target) {
                std::cout << i +1 << '\n';
                break;
            }
            pq.pop();
            que.pop();
        }
    }
    return 0;
}