
if (__name__ == "__main__"):
    num = int(input())
    count = 0
    alphabet = [0 for _ in range(26)]
    for i in range(num):
        text = input()
        choice = text[0]

        isPass = True
        for j in range(len(text)):
            if (alphabet[ord(text[j]) - 97] == 1):
                isPass = False
                break
            if (choice != text[j]):
                alphabet[ord(choice) - 97] = 1
                choice = text[j]

        if (isPass):
            count += 1
        alphabet = [0 for _ in range(26)]
    print(count)
