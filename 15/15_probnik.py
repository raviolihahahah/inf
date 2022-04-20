for A in range(50, 0, -1):
    OK = 1
    for x in range(0, 1000):
        for y in range(0, 1000):
            if not((2 * y + 3 * x != 135) or (y > A) or (x > A)):
                OK = 0
                break
    if OK:
        print(A)
