import sys
input = sys.stdin.readline

if (__name__ == "__main__"):
    n, m = map(int, input().split())
    humanList = dict()
    setList = set()

    for i in range(n):
        name = input().rstrip()
        humanList[name] = 1

    count = 0
    for i in range(m):
        name = input().rstrip()
        if (humanList.get(name)):
            setList.add(name)
            count += 1
    print(count)
    print('\n'.join(sorted(setList)))

