
if (__name__ == "__main__"):
    n = int(input())
    user = list(input().split()[:2] for _ in range(n))
    user.sort(key=lambda x : int(x[0]))
    for data in user:
        print(data[0], data[1])
