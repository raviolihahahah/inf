for x in 0, 1:
    for y in 0, 1:
        for w in 0, 1:
            for z in 0, 1:
                if( ((not(y)) <= (z == w)) and ((z <= x) == w)):
                    print(x, y, w, z)
    
