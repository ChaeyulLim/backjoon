
if (__name__ == "__main__"):
    
    while (True):
        num = list(map(int, input()))
        if (num == [0]): break
        isPalin = True
        for i in range(0, int(len(num) /2)):
            if (num[i] != num[len(num) - i -1]):
                isPalin = False
                break
        print("yes" if (isPalin) else "no")
