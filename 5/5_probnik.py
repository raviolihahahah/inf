for n in range(1, 100000):
    m = n
    x = ""
    while(m > 0):
        x = str(m % 2) + x
        m //= 2
    if n % 2 == 0:
        count = x.count("1")
        y = ""
        while(count):
            y = str(count % 2) + y
            count //= 2
        x += y
    else:
        x = "1" + x + "00"
    
    if  int(x, 2) > 215:
        print(n)
        break
