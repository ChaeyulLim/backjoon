
if (__name__ == "__main__"):
    isbn = input()
    sum = 0
    for i in range(13):
        if (isbn[i] == '*'):
            k = 1 if (i % 2 == 0) else 3
        else:
            sum += (int(isbn[i]) * (1 if (i % 2 == 0) else 3))
    
    for i in range(10):
        if ((sum + (i * k)) % 10 == 0):
            print(i)