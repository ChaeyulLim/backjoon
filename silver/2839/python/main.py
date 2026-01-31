
if (__name__ == "__main__"):
    n = int(input())
    
    _5kg = int(n / 5)
    if (_5kg > 0): n = int(n % 5)

    while (n % 3 != 0):
        if (_5kg > 0):
            _5kg -= 1
            n += 5
        else :
            print(-1)
            exit(0)
    _3kg = int(n / 3)
    print(_5kg + _3kg)