
if (__name__ == "__main__"):
    num = int(input())

    for i in range(num):
        question = input()
        result, count = (0, 0)
        for data in question:
            count = (count +1) if (data == 'O') else 0
            result += count
        print(result)