
if (__name__ == "__main__"):
    repeat = int(input())

    for _ in range(repeat):
        h, w, n = map(int, input().split())
        height = h if (n % h == 0) else int(n % h)
        width = int(n / h) if (n % h == 0) else int(n / h +1)
        
        if (width >= 10):
            answer = str(height) + str(width)
        else:
            answer = str(height) + '0' + str(width)
        print(answer)