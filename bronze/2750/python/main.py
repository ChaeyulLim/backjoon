
if (__name__ == "__main__"):
    n = int(input())
    array = list(int(input()) for _ in range(n))
    array.sort()
    for d in array:
        print(d)