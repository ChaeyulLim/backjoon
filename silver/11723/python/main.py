import sys
input = sys.stdin.readline

if (__name__ == "__main__"):
    num = int(input().strip())
    _set = set()

    for i in range(num):
        command = input().strip()

        if (command == "all"):
            _set = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}
        elif (command == "empty"):
            _set.clear()
        else:
            command, x = command.split()
            if (command == "add"):
                _set.add(int(x))
            elif (command == "remove"):
                _set.discard(int(x))
            elif (command == "check"):
                print(1 if int(x) in _set else 0)
            elif (command == "toggle"):
                if (int(x) in _set):
                    _set.remove(int(x))
                else:
                    _set.add(int(x))
            