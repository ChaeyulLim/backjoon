import sys
input = sys.stdin.readline

if (__name__ == "__main__"):
    n = int(input())
    array = list(int(input()) for _ in range(n))

    array.sort()
    print('\n'.join(map(str, array)))