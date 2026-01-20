
if (__name__ == '__main__'):
    n = int(input())
    num = list(map(int, input().split()))[:n]
    count = 0
    for data in num:
        if (data < 2): continue
        if (data == 2): count += 1
        if (data % 2 == 0): continue

        count += 1
        for i in range(3, int(data**0.5) + 1, 2):
            if (data % i == 0): count -= 1; break
    print(count)