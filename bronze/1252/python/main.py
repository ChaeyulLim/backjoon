
if (__name__ == "__main__"):
    t0, t1 = input().split()
    answer = ""
    if len(t0) < len(t1):
        t0, t1 = (t1, t0)
    
    n0 = len(t0) -1
    n1 = len(t1) -1

    carry = 0
    index = 0
    while n0 > -1:
        if n1 >= 0:
            sum = int(t0[n0]) + int(t1[n1]) + carry
            carry = sum // 2
        elif n0 >= 0:
            sum = int(t0[n0]) + carry
            carry = sum // 2
        answer += str(sum % 2)
        n0 -= 1
        n1 -= 1
    if carry: answer += '1'
    
    print(answer[::-1].lstrip('0') or '0')