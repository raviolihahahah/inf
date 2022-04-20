for a in range(1, 100000):
    for x in range(1, 100000):
        if not(((not(x % 16 == 0))== (x % 24 == 0)) <= (x % a == 0)):
            break
    else:
        print(a)
