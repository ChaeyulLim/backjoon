import sys
input = sys.stdin.readline

if (__name__ == "__main__"):

    num = int(input())
    queue = []
    for i in range(num):

        command = list(input().split())
        if (len(command) == 1):
            if (command[0] == "pop" and len(queue) > 0):
                print(queue.pop(0))
            elif (command[0] == "size"):
                print(len(queue))
            elif (command[0] == "empty"):
                if (len(queue) == 0): print(1)
                else : print(0)
            elif (command[0] == "front" and len(queue) > 0):
                print(queue[0])
            elif (command[0] == "back" and len(queue) > 0):
                print(queue[-1])
            else :
                print(-1)
        else :
            queue.append(int(command[1]))