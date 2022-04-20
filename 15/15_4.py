for a in range(1, 100000):
    for x in range(1, 100000):
        if not(((x % 17 == 0) and (x % 51 == 0)) <= (x % a == 0)):
            break
    else:
        print(a)
