for s in range(1, 100000):
    x = s
    x = x // 100
    n = 1
    while x < 61:
        x += 6
        n += 10
    if n == 101:
        print(s)
    
