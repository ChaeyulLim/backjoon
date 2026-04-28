
if (__name__ == "__main__"):
    num = int(input())
    for i in range(num):
        size = int(input())
        temp = list(map(int, input().split()))[:size]
        print(sum(temp))