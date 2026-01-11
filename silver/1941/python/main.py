
if (__name__ == "__main__"):
    text = input()
    letter = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]
    count = 0
    limit = 0
    for i in range(len(text)):
        if (limit): limit -= 1; continue
        for data in letter:
            if (i + len(data) > len(text)): continue
            if (len(data) == 2):
                if (text[i] == data[0] and text[i +1] == data[1]):
                    limit = 1
                    break
            if (len(data) == 3):
                if (text[i] == data[0] and text[i +1] == data[1] and text[i +2] == data[2]):
                    limit = 2
                    break
        count += 1


    print(count)