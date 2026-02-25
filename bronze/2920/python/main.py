
if (__name__ == "__main__"):
    array = list(map(int, input().split()))
    if (array == [1, 2, 3, 4, 5, 6, 7, 8]):
        print("ascending")
    elif (array == [8, 7, 6, 5, 4, 3, 2, 1]):
        print("descending")
    else:
        print("mixed")