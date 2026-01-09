
if (__name__ == "__main__"):
    curPiece = list(map(int, input().split()))[:6]
    index = 0
    for i in [1, 1, 2, 2, 2, 8]:
        print(i - curPiece[index], end=" ")
        index += 1