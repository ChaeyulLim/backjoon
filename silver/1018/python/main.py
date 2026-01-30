
if (__name__ == "__main__"):
    mY, mX = map(int, input().split())
    board = list(input() for _ in range(mY))
    result = 250


    for _y in range(0, mY-8 +1):
        for _x in range(0, mX-8 +1):
            case1 = 0; case2 = 0
            for y in range(_y, _y+8):
                for x in range(_x, _x+8):
                    if (y % 2 == 0):
                        piece = 'B' if (x % 2 == 0) else 'W'
                    else:
                        piece = 'W' if (x % 2 == 0) else 'B'

                    if (board[y][x] == piece):
                        case2 += 1
                    else :
                        case1 += 1
            minCase = case1 if (case1 < case2) else case2
            if (minCase < result):
                result = minCase

    print(result)
