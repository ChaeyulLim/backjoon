
if (__name__ == "__main__"):
    num = int(input())
    array = list(map(int, input().split()))[:num]
    print(min(array), max(array))