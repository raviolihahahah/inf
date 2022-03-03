for a in range(1, 10):
    OK = 1
    for x in range(1, 10):
        for y in range(1, 10):
            for z in range(1, 10):
                OK *= (((x<10) and (y<7) and (z<17)) <= ((3*x + 2*y + 4*z) < a))
    if OK:
        print(a)
