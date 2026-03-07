
if (__name__ == "__main__"):
    num = int(input())
    count = 0
    while (num >= 5):
        num = int(num / 5)
        count += num
    print(count)