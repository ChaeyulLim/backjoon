
if (__name__ == "__main__"):
    n, k = map(int, input().split())

    array = list()
    queue = list()

    for i in range(1, n +1):
        queue.append(i)

    while (len(queue)):
        for i in range(k -1):
            data = queue.pop(0)
            queue.append(data)
        array.append(queue.pop(0))
    print('<', end='')
    print(", ".join(map(str, array)), end='')
    print('>')