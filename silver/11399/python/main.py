
if (__name__ == "__main__"):
    n = int(input())
    array = list(map(int, input().split()))
    array.sort()

    result, data_count = (0, 0)
    for data in array:
        data_count += data
        result += data_count
    print(result)