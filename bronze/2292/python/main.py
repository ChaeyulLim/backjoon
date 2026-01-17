
if (__name__ == "__main__"):
    num = int(input())
    sum, count = 1, 1

    if (num != 1):
        while (num > sum):
            count += 1
            sum += 6 * (count -1)

    print(count)