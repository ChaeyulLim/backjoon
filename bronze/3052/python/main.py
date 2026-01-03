
if (__name__ == "__main__"):
    array = list()
    count = 0
    for i in range(10):
        array.append(int(input()) % 42)

    for i in range(10):
        for j in range(i +1, 10):
            if ((array[i] == array[j]) and (array[i] != -1)):
                array[j] = -1
        if (array[i] != -1):
            array[i] = -1
            count += 1
    print(count)
            
