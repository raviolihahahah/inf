for a in 0, 1:
    for b in 0, 1:
        for c in 0, 1:
            for d in 0, 1:
                if (not(a) and b) <= (not(c == a) and not(d)):
                     x = 1   
                else:
                    print(a, b, c, d)
