
if (__name__ == "__main__"):
    N, B = map(int, input().split())
    digit = 0
    result = ""
    while (N > 0):
        digit = int(N % B)
        N = int(N / B)
        if (digit >= 10):
            result = chr(65 + digit - 10) + result
        else :
            result = chr(48 + digit) + result
    print(result)

