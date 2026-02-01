
if (__name__ == "__main__"):
    array = list(int(input()) for _ in range(5))

    array.sort()
    result = int(sum(array) / 5)
    print(result)
    print(array[2])
