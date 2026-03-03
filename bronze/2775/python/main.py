
if (__name__ == "__main__"):
    num = int(input())
    for _ in range(num):

        k = int(input())
        n = int(input())
        data = [0] * n

        for i in range(k +1):
            for j in range(n):
                if (i == 0): data[j] = j +1; continue
                for l in range(n - j -1):
                    data[n - j -1] += data[l]
        print(data[n -1])
