
if (__name__ == "__main__"):
    n = int(input())
    

    for i in range(int(n/2), n):
        sum = i
        temp = i
        while (temp):
            sum += temp % 10
            temp = int(temp / 10)
        if (sum == n):
            print(i)
            exit(0)
        i = temp
    print(0)
