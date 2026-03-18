import sys

input = sys.stdin.readline

if (__name__ == "__main__"):

    m, n = map(int, input().split())

    array = [True] * (n +1)
    
    for i in range(2, n +1):
        if (array[i]):
            for j in range(i, n +1, i):
                array[j] = False
            if (i >= m):
                print(i)


