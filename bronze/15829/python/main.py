
if (__name__ == "__main__"):
    num = int(input())
    data = input()
    r = 1; mod = 1234567891; hash = 0

    for i in range(num):
        a = ord(data[i]) - ord('a') +1
        hash = (hash + (a * r)) % mod
        r = ((r * 31) % mod)
    print(hash)