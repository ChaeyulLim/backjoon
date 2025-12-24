
if (__name__ == "__main__"):
    Y, M = map(int, input().split(" "))
    target = int(input())
    Y += int(target / 60)
    M += target % 60

    if (M >= 60):
        M -= 60
        Y += 1
    if (Y >= 24):
        Y -= 24
    print(Y, M)