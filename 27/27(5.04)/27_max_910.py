with open("27b (2).txt", "r") as f:
    n = int(f.readline())
    s1, s2, s3 = 0, 0, 0
    dif = 10000; dif1 = 10000
    for line in f:
        a, b, c = map(int, line.split())
        d = max(a, b, c)
        e = a + b + c - min(a, b, c) - max(a, b, c)
        g = min(a, b, c)
        if (d - e) % 2 == 1 and (d - e) < dif1:
            dif1 = d - e
        if (d - g) % 2 == 1 and (d - g) < dif:
            dif = d - g
        s1 += g; s2 += e; s3 += d
    print(s3 - dif1)
    print(s3 - dif)
    if s1 % 2 == 0:
        print("treu")
    if s2 % 2 != 0:
        #print("treu")
        print(s3)

        
