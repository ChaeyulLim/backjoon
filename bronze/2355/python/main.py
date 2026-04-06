
if (__name__ == "__main__"):
    a, b = map(int, input().split())

    if (a > b) : a, b = b, a
    result = (a + b) * (b - a +1) / 2
    print(int(result))