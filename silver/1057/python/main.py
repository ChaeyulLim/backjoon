
if (__name__ == "__main__"):
    num, a, b = map(int, input().split())
    round = 1
    while a != b:
        a = (a +1) // 2
        b = (b +1) // 2
        round += 1
    print(round -1)