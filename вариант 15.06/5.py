for n in range(1, 10000):
    bn = bin(n)
    bn = bn[2:]
    k = 0
    x = int(bn)
    while x:
        if x % 10 == 1:
            k += 1
        x //= 10
    if k % 2 == 0:
        bn = '1' + bn + '00'
    else:
        bn = '11' + bn
    if int(bn, 2) >= 412:
        print(n)
