
if (__name__ == "__main__"):
    text = []; max = 0

    for i in range(5):
        text.append(input())
        if (len(text[-1]) > max):
            max = len(text[-1])

    for i in range(max):
        for data in text:
            if (i >= len(data)): continue
            print(data[i], end='')
