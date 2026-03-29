
if (__name__ == "__main__"):
    num = int(input())
    for i in range(num):
        arr = list(input().split())
        arr.reverse()
        print(f"Case #{i+1}: ", end='')
        print(" ".join(arr))