
if (__name__ == "__main__"):
    
    n, m = map(int, input().split())

    a = set(list(map(int, input().split()))[:n])
    b = set(list(map(int, input().split()))[:m])
    print(len(a - b) + len(b - a))
    
    