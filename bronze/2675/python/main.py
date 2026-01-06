
if (__name__ == "__main__"):
    for i in range(int(input())):
        num, string = input().split()
        for data in string:
            print(data * int(num), end='')
        print()