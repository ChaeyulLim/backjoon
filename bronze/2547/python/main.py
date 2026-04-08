
if (__name__ == "__main__"):

    numit = int(input())
    count = 0
    while (count < numit):
        try:
            sum = 0
            num = int(input())
            for _ in range(num):
                temp = int(input())
                sum += temp
            if (sum % num == 0): print("YES")
            else: print("NO")
            count += 1
        except: 
            continue