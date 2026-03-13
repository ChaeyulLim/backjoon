
if (__name__ == "__main__"):
    num = int(input())
    stack = list()
    for i in range(num):
        data = int(input())
        if (data == 0):
            stack.pop(-1)
        else:
            stack.append(data)
    print(sum(stack))