
if (__name__ == "__main__"):
    a, b = map(int, input().split())
    c, d = map(int, input().split())

    num0, num1 = (a*d + b*c), (b*d)

    r = 1
    a, b = (num0, num1)
    while (b):
        a, b = (b, a % b)
    print((num0 // a), num1 // a)




