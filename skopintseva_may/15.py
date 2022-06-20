for a in range(1, 10000):
    for x in range(1, 10000):
        if not(((260 % x == 0) <= (not(x % 13 == 0)) ) or (x + a >= 60)):
            break
    else:
        print(a)
        break
            
