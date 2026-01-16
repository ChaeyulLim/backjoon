
if (__name__ == "__main__"):
    num = int(input())
    for i in range(num):
        cent = int(input())
        for data in [25, 10, 5]:
            print(int(cent / data), end=' ')
            cent %= data
        print(int(cent))
