
if (__name__ == "__main__"):
    num = int(input())
    
    k = 1
    while (k * (k +1) / 2 < num):
        k += 1
    pos = int(num - (k * (k -1) / 2))
    if (k % 2 == 0):
        print(f"{pos}/{k - pos +1}")
    else :
        print(f"{k - pos + 1}/{pos}")

