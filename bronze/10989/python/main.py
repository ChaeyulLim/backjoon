import sys
input = sys.stdin.readline

if (__name__ == "__main__"):
    n = int(input())
    array = [0] * 10001
    for i in range(n):
        array[int(input())] += 1
    
    for data in range(1, 10001):
        if array[data] > 0:
            for _ in range(array[data]):
                print(data)
    