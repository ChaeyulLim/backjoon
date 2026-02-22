
if (__name__ == "__main__"):
    array = list(map(int, input().split()))
    result = 0
    for i in array:
        result += (i**2)
    print(int(result % 10))
    