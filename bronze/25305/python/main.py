
if (__name__ == "__main__"):
    n, k = map(int, input().split())
    array = list(map(int, input().split()))[:n]

    for i in range(n-1):
        for j in range(i+1, n):
            if (array[i] < array[j]):
                temp = array[i]
                array[i] = array[j]
                array[j] = temp
    print(array[k -1])