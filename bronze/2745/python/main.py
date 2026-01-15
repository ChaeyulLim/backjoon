


if (__name__ == "__main__"):
    
    N, B = input().split()
    B = int(B)
    result = 0

    for data in N:
        try:
            result = result * B + int(data)
        except:
            result = result * B + ord(data) - 55
    print(result)