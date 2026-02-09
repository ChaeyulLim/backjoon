
if (__name__ == "__main__"):
    n, m = map(int, input().split())
    s = [0] * n
    for i in range(n):
        s[i] = input()
    
    count = 0
    for i in range(m):
        data = input()
        if (data in s):
            count += 1

    print(count)
