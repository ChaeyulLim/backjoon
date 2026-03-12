
if (__name__ == "__main__"):
    num = int(input())

    for i in range(num):
        stack = list()
        text = input()
        
        for data in text:
            if ((not stack) and data == ')'):
                stack = [1]
                break
            if (data == '('):
                stack.append(data)
            elif (data == ')' and stack[-1] == '('):
                stack.pop(-1)
            else:
                stack.append(data)
        print("YES" if (not stack) else "NO")

