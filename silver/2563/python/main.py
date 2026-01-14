
def setting(array, mX, mY):
    for y in range(10):
        for x in range(10):
            array[mY + y][mX + x] = True

if (__name__ == "__main__"):
    num = int(input())
    array = list()
    for i in range(100):
        array.append([False] * 100)
    for i in range(num):
        x, y = map(int, input().split())
        setting(array, x, y)
    
    count = 0
    for y in range(100):
        for x in range(100):
            if (array[y][x]):
                count += 1
    print(count)