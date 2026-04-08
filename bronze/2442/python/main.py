
if (__name__ == "__main__"):
    num = int(input())
    area = num
    for i in range(num):
        area -= 1
        print(" " * area, end="")
        print("*" * (i *2 +1))