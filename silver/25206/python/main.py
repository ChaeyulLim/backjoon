
if (__name__ == "__main__"):
    sumScore = 0.0; sumCredit = 0.0
    creditlist = [4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0]

    for i in range(20):
        text, credit, score = input().split(" ")
        if (score == 'P'): continue
        if (score == 'F'): sumCredit += float(credit); continue

        index = (ord(score[0]) - 65) * 2
        index += 0 if (score[1] == '+') else 1
        sumScore += creditlist[index] * float(credit)
        sumCredit += float(credit)

    print(sumScore / sumCredit)

