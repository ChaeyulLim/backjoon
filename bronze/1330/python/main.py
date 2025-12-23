
if (__name__ == "__main__"):
    num0, num1 = map(int, input().split())
    if (num0 > num1):
        print(">")
    elif (num0 < num1):
        print("<")
    else :
        print("==")