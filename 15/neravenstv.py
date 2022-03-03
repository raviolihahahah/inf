count = 0
a = 700001
while count < 5:
    q = 2
    s = 0
    while q*q <= a:
        if  a % q == 0:
            s += q
            s += a // q
            break
        q += 1
    if s % 10 == 8:
        print(a, s)
        count += 1
    a += 1
 
