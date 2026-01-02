
if __name__ == "__main__":
    resert = list()
    for i in range(30):
        resert.append(i +1)
    for _ in range(28):
        num = int(input())
        resert[num -1] = 0
    a, b, c = set(resert)
    if (b > c):
        print(c)
        print(b)
    else:
        print(b)
        print(c)