
if (__name__ == "__main__"):
    inPrice = int(input())
    count = int(input())
    totalPrice = 0
    for i in range(count):
        price, num = map(int, input().split())
        totalPrice += (price * num)
    print("Yes" if totalPrice == inPrice else "No")