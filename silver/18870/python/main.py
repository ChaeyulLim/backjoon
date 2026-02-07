
if (__name__ == "__main__"):
    n = int(input())

    pos = list(map(int, input().split()))
    bucket = [0] *n
    for i in range(n):
        pos[i] = (i, pos[i])
    
    pos.sort(key=lambda x : x[1])

    count = 0
    for i in range(n):
        if (i > 0 and pos[i][1] == pos[i-1][1]):
            bucket[pos[i][0]] = bucket[pos[i-1][0]]
        else :
            bucket[pos[i][0]] = count
            count += 1


    print(" ".join(map(str, bucket)))