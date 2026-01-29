
if (__name__ == "__main__"):
    a, b, c, d, e, f = map(int, input().split())
    
    for y in range(-999, 999 +1):
        for x in range(-999, 999 +1):
            if ((a * x + b * y == c) and (d * x + e * y == f)):
                print(x, y)
                exit(0)
    