
def factory(n):
    return factory(n -1) * n if (n > 0) else 1

if (__name__ == "__main__"):
    print(factory(int(input())))