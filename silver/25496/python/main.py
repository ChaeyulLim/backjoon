
if (__name__ == "__main__"):
    p, n = map(int, input().split())
    a = list(map(int, input().split()))[:n]
    a.sort()

    index = 0
    while (p < 200):
        if (index == n): break
        p += a[index]
        index += 1
    print(index)