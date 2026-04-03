
if (__name__ == "__main__"):
    while (True):
        a, b = map(int, input().split())
        if (a == b and a == 0): break
        print("Yes" if (a > b) else "No")