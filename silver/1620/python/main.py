import sys
input = sys.stdin.readline

if (__name__ == "__main__"):
    n, m = map(int, input().split())
    numberToString = dict()
    stringToNumber = dict()
    for i in range(1, n +1):
        name = input().rstrip()
        numberToString[i] = name
        stringToNumber[name] = i

    for i in range(m):
        text = input().rstrip()
        if (text.isdigit()):
            num = int(text)
            print(numberToString[num])
        else:
            print(stringToNumber[text])


