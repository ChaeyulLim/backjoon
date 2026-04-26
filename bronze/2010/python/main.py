import sys
input = sys.stdin.readline

if (__name__ == "__main__"):
    num = int(input())
    sum = 0
    for i in range(num):
        sum += int(input())
    print(sum - (num - 1))