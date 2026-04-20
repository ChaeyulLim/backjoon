  
if (__name__ == "__main__"):
    num = int(input())
    for _ in range(num):
        rep = int(input())
        temp = list(map(int, input().split()))
        min_, max_ = min(temp), max(temp)
        print((max_ - min_) *2)