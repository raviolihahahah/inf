print("x", "y", "w", "z")
for x in 0, 1:
    for y in 0, 1:
        for w in 0, 1:
            for z in 0, 1:
                if((x <= w) == (w <= (not(z)))) and y:
                    print(x, y, w, z)
