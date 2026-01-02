
if (__name__ == "__main__"):
    n, m = map(int, input().split())
    array = [0 for _ in range(n)]
    for _ in range(m):
        i, j, k = map(int, input().split())
        for index in range(i -1, j):
            array[index] = k
    for data in array:
        print(data, end=' ')