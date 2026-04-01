
if (__name__ == "__main__"):
    num = int(input())

    arr = list(map(int, input().split()))
    score, count = (0, 0)
    for i in arr:
        count = (count +1) if (i) else 0
        score += count
    print(score)