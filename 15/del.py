for a in range(1, 10000):
    for x in range(1, 10000):
        if not((144 % a == 0) and ((x % a == 0) or (not(x % 66 == 0)) or (not(x % 105 == 0)))):
            break
    else:
        print(a)
