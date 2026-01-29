
if (__name__ == "__main__"):
    n, m = map(int, input().split())
    card = list(map(int, input().split()))[:n]
    _max = 0
    
    for i in range(n):
        for j in range(i+1, n):
            _sum = card[i] + card[j]
            if (_sum >= m): continue

            for k in range(j+1, n):
                _sum = card[i] + card[j] + card[k]
                if (_max < _sum and _sum <= m):
                    _max = _sum
    print(_max)