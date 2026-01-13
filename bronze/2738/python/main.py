
if (__name__ == "__main__"):
    n, m = map(int, input().split())
    array = list(); answer = list()
    for i in range(n * 2):
        array.append(list(map(int, input().split())))

    for i in range(n):
        for j in range(m):
            answer.append(array[i][j] + array[i + n][j])
    for i in range(n*m):
        if ((i +1) % m == 0):
            print(answer[i])
        else :
            print(answer[i], end=' ')
