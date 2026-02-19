 
if (__name__ == "__main__"):
    a = int(input())
    b = int(input())
    c = int(input())
    result = a * b * c
    answer = [0] *10
    while (result > 0):
        answer[result % 10] += 1
        result = int(result / 10)
    
    print('\n'.join(map(str, answer)))