
if (__name__ == "__main__"):
    text = input()
    spelling = list(0 for _ in range(26))

    for i in range(len(text)):
        if (ord(text[i]) > 96):
            spelling[ord(text[i]) - 97] += 1
        else:
            spelling[ord(text[i]) - 65] += 1

    maxSpelling = max(spelling)
    isOverlap = spelling.count(maxSpelling)
    maxSpelling = spelling.index(maxSpelling)
    print('?') if (isOverlap > 1) else print(chr(maxSpelling + 65))