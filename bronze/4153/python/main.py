
if (__name__ == "__main__"):
    while (True):
        array = list(map(int, input().split()))

        if (array == [0, 0, 0]): break

        array.sort()

        if ((array[0]*array[0]) + (array[1]*array[1]) == (array[2]*array[2])):
            print("right")
        else:
            print("wrong")
        