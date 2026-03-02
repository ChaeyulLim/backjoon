
if (__name__ == "__main__"):
    a, b = map(int, input().split())
    tempA, tempB = (a, b)
    
    while (tempB):
        tempA, tempB = (tempB, tempA % tempB)
    print(tempA)
    print(a * b // tempA)