with open("27a.txt", "r") as f:
    n = int(f.readline())
    s1, s2, s3 = 0, 0, 0
    dif = 10000; dif1 = 10000
    for line in f:
        a, b, c = map(int, line.split())
        d = max(a, b, c)
        e = a + b + c - min(a, b, c) - max(a, b, c)
        g = min(a, b, c)
        if (d - g) % 2 == 1 and (d - g) < dif:
            dif = d - g
        if (e - g) % 2 == 1 and (e - g) < dif1:
            dif1 = e - g
        s1 += d; s2 += e; s3 += g
    print(s3 + dif + dif1)

        
