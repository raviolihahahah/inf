for n in range(1, 10000):
    n_2 = bin(n)
    n_2 = n_2[2:]
    r = ''
    x = int(n_2)
    while(x):
        if x % 10 == 0:
            r = '1' + r
        else:
            r = '0' + r
        x //= 10
    r =  r[:(len(r) - 1)]
    if r != "" and int(r, 2) > 120:
         print(n)
        
 
