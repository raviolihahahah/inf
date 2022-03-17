with open("27.txt") as f:
    n = int(f.readline())
    s = 0
    dm = [0] * 6
    for line in f:
        a,b = map(int, line.split())
        s += max(a, b)
        d = (max(a, b) - min(a, b))
        r = d % 6
        if(r > 0):
            dm_new = dmm[:]
            
            
    if(s % 6 != 0):
        s -= ost[s % 6]

    print(s)
