for i in range(-100000, 100000, 1):
    z = i
    a = 1; b = 1
    while z > 0:
        if z % 2 > 0:
            a += z % 8
        else:
            b = b * (z % 8)
        z = z // 8
    if(a == 7 and b == 4):
        print(i)
