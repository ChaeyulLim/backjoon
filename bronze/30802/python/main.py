
if (__name__ == "__main__"):
    n = int(input())
    size = list(map(int, input().split()))
    t, p = map(int, input().split())
    count = 0
    for i in range(6):
        if (size[i] % t == 0):
            count += int(size[i] / t)
        else:
            count += int(size[i] / t) +1
    
    print(f"{count}\n{int(n / p)} {n % p}")