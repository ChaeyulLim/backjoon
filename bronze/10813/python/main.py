
if (__name__ == "__main__"):
    n, m = map(int, input().split())
    array = [_ for _ in range(1, n +1)]

    for _ in range(m):
        i, j = map(int, input().split())
        temp = array[i -1]
        array[i -1] = array[j -1]
        array[j -1] = temp
    for data in array:
        print(data, end=' ')