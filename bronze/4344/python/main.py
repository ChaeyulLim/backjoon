
if (__name__ == "__main__"):
    num = int(input())
    for i in range(num):
        arr = list(map(int, input().split()))
        size = arr.pop(0)
        score = (float)(sum(arr)) / size
        count = 0
        for j in range(size):
            if (arr[j] > score):
                count += 1
        result = (float)(count) / size * 100
        print(f"{result:.3f}%")