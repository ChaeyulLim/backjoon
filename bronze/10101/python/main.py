
if (__name__ == "__main__"):
    a = int(input())
    b = int(input())
    c = int(input())

    if (a == 60 and a == b and a == c and b == c):
        print("Equilateral")
    elif ((a+b+c) == 180):
        if (a == b or a == c or b == c):
            print("Isosceles")
        else :
            print("Scalene")
    else :
        print("Error")