from queue import Queue

if (__name__ == "__main__"):
    que = Queue()
    num = int(input())
    
    for i in range(1, num +1):
        que.put(i)
    
    while (que.qsize() > 1):
        que.get()
        que.put(que.get())
    print(que.get())
