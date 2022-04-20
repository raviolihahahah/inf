for i in range(100000, 1, -1):
    x = i
    if x % 2 == 0:
        M = 20
        L = 30
    else:
        M = 30
        L = 20
    while x < M:
        M += 1
        L *= 2
        x += M // 2
    if M == 32 and L == 80:
        print(i)
        break
        
