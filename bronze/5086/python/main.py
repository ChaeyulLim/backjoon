
if (__name__ == "__main__"):
    
    while True:
        A, B = map(int, input().split())
        if (A == B and A == 0):
            break
        elif (B % A == 0):
            print("factor")
        elif (A % B == 0):
            print("multiple")
        else:
            print("neither")