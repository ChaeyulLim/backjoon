
if (__name__ == "__main__"):
    num = int(input())
    array = [0] * 10

    while (num > 0):
        array[int(num % 10)] += 1
        num = int(num / 10)
    
    for i in range(10):
        if (array[9-i] > 0):
            for _ in range(array[9-i]):
                print(9-i, end='')