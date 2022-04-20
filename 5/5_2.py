def f(n):
    x = ""
    while(n > 0):
        x = str(n % 3) + x
        n = n // 3
    return x
for i in range(1, 100000):
    n = i * 3
    if n % 2 == 0:
        n = int(f(n) + "00", 3)
    else:
        n = int(f(n) + "11", 3)
    if n > 169:
        print(n)
        break
        
