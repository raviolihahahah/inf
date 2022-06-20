for n in range(1, 10000):
    a = 0
    b = 0
    x = n
    while x % 4 == 0:
        print(x)
        a += 1
        b += x % 10
        x //= 10
    if a == 2 and b == 6:
        print(n)
