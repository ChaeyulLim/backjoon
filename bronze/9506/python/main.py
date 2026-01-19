
if (__name__ == "__main__"):
    N = 0
    while (True):
        N = int(input())
        if (N == -1):
            break
        puts = f"{N} = {1}"; result = 1
        for i in range(2, N):
            if (N % i == 0):
                puts += f" + {i}"
                result += i
        if (N == result):
            print(puts)
        else :
            print(f"{N} is NOT perfect.")


