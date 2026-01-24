
if (__name__ == "__main__"):
    while (1):
        a, b, c = map(int, input().split())
        if (a == 0 and b == 0 and c == 0): break
        
        sum, target = (0, 0)
        target = max([a, b, c])
        if (target == a): sum = b + c
        elif (target == b): sum = a + c
        elif (target == c): sum = a + b
        if (target >= sum): print("Invalid"); continue

        if (a == b and a == c and b == c):
            print("Equilateral")
        elif (a == b or a == c or b == c):
            print("Isosceles")
        else :
            print("Scalene")