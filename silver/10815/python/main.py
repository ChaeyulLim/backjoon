
if (__name__ == "__main__"):
    n = int(input())
    card_n = list(map(int, input().split()))[:n]
    m = int(input())
    card_m = list(map(int, input().split()))[:m]

    bucket = [0] * m

    for i in range(m):
        card_m[i] = (i, card_m[i])

    card_n.sort()
    card_m.sort(key=lambda x : x[1])

    count = 0
    for data in card_m:
        while (count < n and card_n[count] < data[1]):
            count += 1
        if (count >= n): break
        if (card_n[count] == data[1]): bucket[data[0]] = 1
    print(" ".join(map(str, bucket)))

    
