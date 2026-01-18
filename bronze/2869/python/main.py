
if (__name__ == "__main__"):
    A, B, V = map(int, input().split())
    print(int((V-A + A-B -1) / (A-B) +1))