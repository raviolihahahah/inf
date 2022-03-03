ok = 1
for a in range(1, 10000):
    ok = 1
    for x in range(1, 10000):
        ok *= ((144 % a == 0) and ((x % a == 0) or (not(x % 66 == 0)) or (not(x % 105 == 0))))
    if ok:
        print(a)
        
