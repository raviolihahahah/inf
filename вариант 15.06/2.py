for x in 0, 1:
    for y in 0, 1:
        for w in 0, 1:
            for z in 0, 1:
                if not((y or x) == ((y <= w) or not(z))):
                    print(x, y, w, z)
