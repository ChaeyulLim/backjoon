
if (__name__ == "__main__"):
    num = int(input())
    target = input()

    temp = target[0]
    for i in range(len(target)):
        if (i % 2 == 0):
            if (temp != target[i]):
                print("No")
                exit(0)
        continue
    print("Yes")