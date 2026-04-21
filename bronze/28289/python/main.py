
if (__name__ == "__main__"):
    num = int(input())
    array = [0, 0, 0, 0]
    for i in range(num):
        g, c, n = map(int, input().split())
        if (g > 1):
            if (c == 1 or c == 2):
                array[0] += 1
            if (c == 3):
                array[1] += 1
            if (c == 4):
                array[2] += 1
        else :
            array[3] += 1
    print("\n".join(map(str, array)))