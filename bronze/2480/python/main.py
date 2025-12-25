
if (__name__ == "__main__"):
    num0, num1, num2 = map(int, input().split(" "))
    if (num0 == num1 and num1 == num2 and num0 == num2):
        print(10000 + (num0 * 1000))
    elif (num0 == num1 or num1 == num2 or num0 == num2):
        target = 0
        if (num0 == num1):
            target = num0
        elif (num1 == num2) :
            target = num1
        else :
            target = num2
        print(1000 + (target * 100))
    else :
        target = 0
        if (num0 > num1):
            if (num0 > num2):
                target = num0
            else :
                target = num2
        else :
            if (num1 > num2):
                target = num1
            else :
                target = num2
        print(target * 100)