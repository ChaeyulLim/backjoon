import sys

if (__name__ == "__main__"):
    count = int(sys.stdin.readline())
    for i in range(count):
        num1, num2 = map(int, sys.stdin.readline().split())
        print(num1 + num2)