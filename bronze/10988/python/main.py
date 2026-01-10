
if (__name__ == "__main__"):
    text = input()
    number = 1
    for i in range(int(len(text) /2)):
        if (text[i] != text[len(text) - i - 1]):
            number = 0
    print(number)