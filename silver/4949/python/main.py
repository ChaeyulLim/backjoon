
if (__name__ == "__main__"):

    while (1):
        stack = list()
        text = input()
        if (text == '.'):
            break
        
        for data in text:
             if ((not stack) and (data == ']' or data == ')')):
                stack = [1]
                break
             if (data in ['[', ']', '(', ')']):
                if (data in ['[', '(']):
                    stack.append(data)
                elif (data == ']' and stack[-1] == '['):
                    stack.pop(-1)
                elif (data == ')' and stack[-1] == '('):
                    stack.pop(-1)
                else:
                    stack.append(data)
        print("yes" if (not stack) else "no")

