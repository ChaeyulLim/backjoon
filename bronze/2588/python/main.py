
if (__name__ == "__main__"):
    num1 = int(input())
    num2 = int(input())
    a = num2 % 10
    b = int(num2 % 100 / 10)
    c = int(num2 / 100)
    print(num1 * a)
    print(num1 * b)
    print(num1 * c)
    print(num1 * num2)

