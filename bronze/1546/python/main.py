
if (__name__ == "__main__"):
    num = int(input())
    array = list(map(int, input().split()))[:num]
    sum = 0.0
    max = 0
    for data in array:
        if (data > max):
            max = data
    for i in range(num):
        sum += 1.0 * array[i] / max * 100
    print(sum / num)