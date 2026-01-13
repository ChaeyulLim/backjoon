
if (__name__ == '__main__'):
    array = [list(map(int, input().split()))[:9] for _ in range(9)]
    max = -1
    index = [0, 0]
    for y in range(9):
        for x in range(9):
            if (array[y][x] > max):
                max = array[y][x]
                index = [y, x]
    print(max)
    print(f"{index[0] +1} {index[1] +1}")