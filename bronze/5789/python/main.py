
if (__name__ == "__main__"):
    num = int(input())
    for i in range(num):
        context = input()
        temp = len(context) // 2
        print('Do-it' if context[temp -1] == context[temp] else 'Do-it-Not')