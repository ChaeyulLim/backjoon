
if (__name__ == "__main__"):
    num = int(input())
    array = list(tuple(map(int, input().split())) for _ in range(num))

    for i in range(num):
        rank = 1
        for j in range(num):
            if (array[j][0] > array[i][0] and array[j][1] > array[i][1]):
                rank += 1
        print(rank, end=' ')