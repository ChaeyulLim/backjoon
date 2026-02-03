
if (__name__ == "__main__"):
    n = int(input())
    array = list(tuple(map(int, input().split())) for _ in range(n))
    array.sort(key=lambda x: (x[1], x[0]))
    for data in array:
        print(f"{data[0]} {data[1]}")