with open ("27.txt") as f:
    s = 0
    mr = 10000
    for line in f:
        a,b = line.split(" ")
        a = int(a) * int(a)
        b = int(b) * int(b)
        s += max(a, b)
        if (max(a,b) - min(a,b)) % 2 != 0:
            if (max(a,b) - min(a,b)) < mr:  
                mr = max(a,b) - min(a,b)
    if s % 2 == 0:
        s = s - mr
print(s)
    
