
if (__name__ == "__main__"):
    n, m = map(int, input().split(' '))
    array = list()
    for i in range(n):
        array.append(i+1)
    for _ in range(m):
        b, e = map(int, input().split())
        for i in range(int((e - b +1) / 2)):
            num1 = b + i -1
            num2 = e - i -1
            temp = array[num1]
            array[num1] = array[num2]
            array[num2] = temp
    for data in array:
        print(data, end=' ')
