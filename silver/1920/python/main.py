
if (__name__ == "__main__"):
    num = int(input())
    key = list(map(int, input().split()))[:num]
    base = dict()

    for data in key:
        base[data] = 1

    num = int(input())
    value = list(map(int, input().split()))[:num]

    for data in value:
        if (base.get(data) == 1):
            print(1)
        else :
            print(0)
