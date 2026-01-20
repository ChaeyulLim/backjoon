
def sqrt(num):
    if (num < 2): return 0
    if (num == 2): return num
    if (num % 2 == 0): return 0

    for i in range(3, int(data**0.5) + 1, 2):
        if (num % i == 0): return 0
    return num

if (__name__ == '__main__'):
    n = int(input())
    m = int(input())
    count = 0
    min = -1
    for data in range(n, m +1):
        count += sqrt(data)
        if (min == -1 and count > 0):
            min = count
    if (min == -1): print(-1)
    else :
        print(count)
        print(min)