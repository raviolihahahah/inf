for n in range(1, 100000):
    x = n
    s = ""
    while(x > 0):
        s = str(x % 2) + s
        x = x // 2
    if n % 2 != 0:
        s = "11" + s
    else:
        s = "10" + s
    a = int(s, 2)
    if a / 18 >= 3:
        print(a)
        break
        
