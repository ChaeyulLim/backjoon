
if (__name__ == "__main__"):
    num = int(input())
    result = dict()
    for i in range(num):
        temp = input()[0]
        if (result.get(temp) is not None):
            result[temp] += 1
        else :
            result[temp] = 1
    sorted_key = dict(sorted(result.items(), key=lambda x: x[0]))
    answer = str()
    for data in sorted_key:
        if (result[data] >= 5):
            answer += data
    print(answer if len(answer) else "PREDAJA")
