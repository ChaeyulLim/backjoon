
if (__name__ == "__main__"):
    num = int(input())


    for i in range(1, num + 1):
        print(' ' * (num - i), end='')
        print('*' * ((i -1) *2 +1))

    for i in range(1, num):
        print(' ' * (i), end='')
        print('*' * ((num - i -1) *2 +1))
    