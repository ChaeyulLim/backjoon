
def f_key(s):
    return (len(s), s)

if (__name__ == "__main__"):
    n = int(input())

    text = list(input() for _ in range(n))

    text = list(set(text))
    text.sort(key=f_key)
    
    print('\n'.join(text))

