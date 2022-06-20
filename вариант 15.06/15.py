for a in range(1, 10000):
    for x in range(1, 10000):
        if not(((x % 6 == 0) <= (not(x % 14 == 0))) or (x + a >= 70) and (a % 20 == 0)):
            break
    else:
        print(a)
        break
