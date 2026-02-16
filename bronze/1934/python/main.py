
if (__name__ == "__main__"):
    n = int(input())
    for i in range(n):
        a, b = map(int, input().split())
        r = 1
        c = a; d = b
        while (r > 0):
            r = c % d
            c = d
            d = r
        temp = c
        print(int((a * b) / temp))