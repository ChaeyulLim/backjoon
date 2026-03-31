
if (__name__ == "__main__"):
    num = 1000 - int(input())
    
    count =  int(num / 500); num %= 500
    count += int(num / 100); num %= 100
    count += int(num / 50); num %= 50
    count += int(num / 10); num %= 10
    count += int(num / 5); num %= 5
    count += int(num / 1); print(count)