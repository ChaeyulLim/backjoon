
if (__name__ == "__main__"):
    a, b = map(int, input().split())
    r = 1
    c, d = (a, b)
    while (r > 0):
        r = int(c % d)
        c, d = (d, r)
    print(int((a * b) / c))
