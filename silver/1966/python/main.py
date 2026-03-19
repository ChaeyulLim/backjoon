
if (__name__ == "__main__"):
    n = int(input())

    for _ in range(n):
        queue = list()
        pq = list()

        max, target = map(int, input().split())

        arr = list(map(int, input().split()))
        for i in range(max):
            queue.append((arr[i], i))
            pq.append(arr[i])
        pq.sort(reverse=True)
        for i in range(max):
            while (pq[0] != queue[0][0]):
                queue.append(queue.pop(0))
            if (queue[0][1] == target):
                print(i +1)
                break
            queue.pop(0)
            pq.pop(0)
