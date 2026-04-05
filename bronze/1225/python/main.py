from collections import Counter

if (__name__ == "__main__"):

    a, b = input().split()
    ac, bc = (Counter(a), Counter(b))
    result = 0
    
    for i in range(10):
        for j in range(10):
            result += i * j * ac[str(i)] * bc[str(j)]
    print(result)

