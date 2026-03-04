
def fectorial(n):
    return n * fectorial(n -1) if (n > 1) else 1

if (__name__ == "__main__"):
    n, k = map(int, input().split())
    print(int(fectorial(n) / (fectorial(k) * fectorial(n - k))))
    