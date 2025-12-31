
if (__name__ == "__main__"):
    num = int(input())
    array = list(map(int, input().split()))[:num]
    target = int(input())
    count = 0
    for i in array:
        if (target == i):
            count += 1
    print(count)