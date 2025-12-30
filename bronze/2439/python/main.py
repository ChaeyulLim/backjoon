
if (__name__ == "__main__"):
    num = int(input())
    for i in range(1, num +1):
        area = num - (i)
        print(" " * area, end='')
        print("*" * i)