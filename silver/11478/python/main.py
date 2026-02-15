
if (__name__ == "__main__"):
    text = input()
    result = set()

    for i in range(len(text)):
        for j in range(i +1, len(text) +1):
            result.add(text[i:j])
    print(len(result))
