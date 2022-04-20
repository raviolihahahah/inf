with open ("27.txt") as f:
    n = int(f.readline())
    s = 0
    mr = 10000
    for line in f:
        a,b = line.split(" ")
        a = int(a)
        b = int(b)
        s += max(a, b)
        if (max(a,b) - min(a,b)) % 3 != 0:
            if (max(a,b) - min(a,b)) < mr:
                mr = max(a,b) - min(a,b)
    if s % 3 == 0:
        s = s - mr
print(s)
    
