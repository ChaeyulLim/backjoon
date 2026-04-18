
if (__name__ == "__main__"):
    num = int(input())
    for i in range(num):
        print(' '*i, end='')
        print('*' *((num - i -1) *2 + 1))