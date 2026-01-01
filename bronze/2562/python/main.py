
if (__name__ == "__main__"):
    array = list()
    max, index = (0, 0)
    for i in range(9):
        array.append(int(input()))
        if (array[i] > max):
            max = array[i]
            index = i
    print(max)
    print(index +1)