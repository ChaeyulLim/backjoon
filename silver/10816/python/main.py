import sys
input = sys.stdin.readline

if (__name__ == "__main__"):
    n = int(input().rstrip())

    buffer = dict()
    bufferList = list(map(int, input().split()))[:n]

    for i in range(n):
        if (buffer.get(bufferList[i])):
            buffer[bufferList[i]] += 1
        else :
            buffer[bufferList[i]] = 1
    
    m = int(input().rstrip())
    array = list(map(int, input().split()))[:m]

    for i in range(m):
        if (buffer.get(array[i])):
            array[i] = buffer.get(array[i])
        else :
            array[i] = 0
    print(' '.join(map(str, array)))
    