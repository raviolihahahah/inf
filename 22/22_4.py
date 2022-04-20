for i in range(100000, -100000, -1):
    z = i
    a = 1; b = 1
    while z > 0:
        if z % 2 > 0:
            a += z % 16
        else:
            b = b * (z % 16)
        z = z // 16
    if a == 4 and b == 14:
        print(i)
        break
