
if (__name__ == "__main__"):
    num = list(input() for _ in range(3))
    number = 0

    for i in range(3):
        try:
            number = int(num[i])
        except:
            number += 1
    number += 1
    
    if (number % 3 == 0 and number % 5 == 0):
        print("FizzBuzz")
    elif (number % 3 == 0 and number % 5 != 0):
        print("Fizz")
    elif (number % 3 != 0 and number % 5 == 0):
        print("Buzz")
    else:
        print(number)


