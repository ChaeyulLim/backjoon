import sys
input = sys.stdin.readline

if (__name__ == "__main__"):
    n = int(input())
    log = set()
    for i in range(n):
        name, access = input().split()
        if (access == "enter"):
            log.add(name)
        else:
            log.remove(name)

    for data in sorted(log, reverse=True):
        print(data)