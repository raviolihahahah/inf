for x in range(10000, 0, -1):
    y = x
    if x % 3 == 0 :
        M = 10
        L = 20
    else:
        M = 20
        L = 10
    while(y < M):
        M += 1
        L += 2
        y += M // 2
    if M == 21 and L == 12:
        print(x)
