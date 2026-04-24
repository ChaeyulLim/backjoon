
if (__name__ == "__main__"):
    num = int(input())

    for i in range(1, num +1):
        temp = (num * 2) - (i * 2)
        print('*' * i, end='')
        print(' ' * temp, end='')
        print('*' * i)
    i = num
    for _ in range(num):
        i -= 1
        temp = (num * 2) - (i * 2)
        print('*' * i, end='')
        print(' ' * temp, end='')
        print('*' * i)
