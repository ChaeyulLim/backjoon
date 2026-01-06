
if (__name__ == "__main__"):
    name = input()
    data = list()

    for i in range(26):
        data.append(name.find(chr(97 + i)))
    for d in data:
        print(d, end=' ')