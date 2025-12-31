
if (__name__ == "__main__"):
    num, target = map(int, input().split())
    array = list(map(int, input().split()))[:num]

    for data in array:
        if (target > data):
            print(data, end=' ')