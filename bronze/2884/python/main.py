

if (__name__ == "__main__"):
    Y, M = map(int, input().split(' '))
    if (M < 45):
        Y -= 1
        M += 15
    else :
        M -= 45
    if (Y < 0):
        Y += 24
    print(Y, M)