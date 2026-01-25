
if (__name__ == '__main__'):
    a, b, c = map(int, input().split())
    target = max([a, b, c])
    sum = (a + b + c - target)
    if (target < sum):
        print(a + b + c)
    else :
        print(sum + sum -1)