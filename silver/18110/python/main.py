import sys
input = sys.stdin.readline

if (__name__ == "__main__"):
    n = int(input())

    if (n == 0): print(0); exit(0)

    array = list(int(input()) for _ in range(n))

    array.sort()

    cut = (n * 15 + 50) // 100
    trimmed = n - cut * 2

    if (trimmed <= 0): print(0); exit(0)
    
    sum = 0
    trimmed_arr = array[cut:] if cut == 0 else array[cut:-cut]
    for data in trimmed_arr:
        sum += data
    print((2 * sum + trimmed) // (2 * trimmed))