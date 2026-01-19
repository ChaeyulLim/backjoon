
if (__name__ == "__main__"):
    N, K = map(int, input().split())

    count, result = (0, 0)
    for i in range(1, N +1):
        if (N % i == 0): count += 1
        if (count == K): result = i; break
    print(result)