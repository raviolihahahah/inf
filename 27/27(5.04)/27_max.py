with open("27-A.txt", "r") as f:
    n = int(f.readline())
    s1, s2, s3 = 0, 0, 0
    dif = 10000; dif1 = 10000; dif3 = 10000
    for line in f:
        a, b, c = map(int, line.split())
        d = max(a, b, c)
        e = a + b + c - min(a, b, c) - max(a, b, c)
        g = min(a, b, c)
        if (d - g) % 2 == 1 and (d - g) < dif:
            dif = d - g
        if (d - e) % 2 == 1 and (d - e) < dif:
            dif = d - e
        s1 += e; s2 += g; s3 += d
    if s1 % 2 != s2 % 2:
        s3 -= dif
    print(s3)

        
