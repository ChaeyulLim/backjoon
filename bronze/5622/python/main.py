
if (__name__ == "__main__"):
    numbers = list(input())
    count = 0
    for data in numbers:
        if (data in ['A', 'B', 'C']):
            count += 3
        if (data in ['D', 'E', 'F']):
            count += 4
        if (data in ['G', 'H', 'I']):
            count += 5
        if (data in ['J', 'K', 'L']):
            count += 6
        if (data in ['M', 'N', 'O']):
            count += 7
        if (data in ['P', 'Q', 'R', 'S']):
            count += 8
        if (data in ['T', 'U', 'V']):
            count += 9
        if (data in ['W', 'X', 'Y', 'Z']):
            count += 10
    print(count)