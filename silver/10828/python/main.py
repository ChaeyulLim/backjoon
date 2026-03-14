import sys
input = sys.stdin.readline

if (__name__ == "__main__"):
    num = int(input())
    stack = []
    for i in range(num):

        command = list(input().split())
        if (len(command) == 1):
            if (command[0] == "pop" and len(stack) > 0):
                print(stack.pop(-1))
            elif (command[0] == "size"):
                print(len(stack))
            elif (command[0] == "empty"):
                if (len(stack) == 0): print(1)
                else : print(0)
            elif (command[0] == "top" and len(stack) > 0):
                print(stack[-1])
            else :
                print(-1)
        else :
            stack.append(int(command[1]))