
if (__name__ == "__main__"):
    num = int(input())

    dic = dict()

    for i in range(num):
        temp = int(input())
        if (temp in dic.keys()):
            dic[temp] += 1
        else:
            dic[temp] = 1

    max = 0; index = 0
    for key in sorted(dic.keys()):
        if (max < dic[key]):
            max = dic[key]
            index = key
    print(index)