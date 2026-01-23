
if (__name__ == "__main__"):
    num = int(input())
    minX, minY = 100000, 100000
    maxX, maxY = -100000, -100000

    for i in range(num):
        x, y = map(int, input().split())
        if (minX > x): minX = x
        if (minY > y): minY = y
        if (maxX < x): maxX = x
        if (maxY < y): maxY = y
        
    print((maxX - minX) * (maxY - minY))