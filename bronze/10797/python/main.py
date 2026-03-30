
if (__name__ == "__main__"):
    day = int(input())
    number = list(map(int, input().split()))
    count = 0
    for i in range(5):
        if (day == number[i]): count += 1
    print(count)