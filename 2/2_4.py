for a in 0, 1:
    for b in 0, 1:
        for c in 0, 1:
            for d in 0, 1:
                if not(a or not(d or c) or (c == b)):
                    print(a, b, c, d)
