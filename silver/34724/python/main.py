
if (__name__ == "__main__"):


    n, m = map(int, input().split())
    arr = list(list(map(int, input())) for _ in range(n))
    
    stop = False
    for y in range(1, n):
        for x in range(1, m):
            if (arr[y][x] == 1):
                if ((y -1) > -1 and (x -1) > -1):
                    if (arr[y-1][x-1] == 1 and arr[y-1][x] == 1 and arr[y][x-1] == 1) :
                        stop = True;
                        break;
                    
                if ((y -1) > -1 and (x +1) < m) :
                    if (arr[y-1][x] == 1 and arr[y-1][x+1] == 1 and arr[y][x+1] == 1) :
                        stop = True;
                        break;
                     
                
                if ((y +1) < n and (x -1) > -1) :
                    if (arr[y][x-1] == 1 and arr[y+1][x-1] == 1 and arr[y+1][x] == 1) :
                        stop = True;
                        break;
                    
                
                if ((y +1) < n and (x +1) < m) :
                    if (arr[y][x+1] == 1 and arr[y+1][x] == 1 and arr[y+1][x+1] == 1) :
                        stop = True;
                        break;
                    
    print(1 if (stop) else 0)