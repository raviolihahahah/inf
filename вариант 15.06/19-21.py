def f(s, c, m, p1, p2, p3, p4, p5, p6):
    if s >= 250:
        return c % 2 == m % 2
    if c == m:
        return 0
    h = []
    if p1 == 1:
        h += [f(s + 1, c + 1, m, 0, p2, p3, p4, p5, p6)]
    if p2 == 1:
        h += [f(s + 2, c + 1, m, p1, 0, p3, p4, p5, p6)]
    if p3 == 1:
        h += [f(s + 3, c + 1, m, p1, p2, 0, p4, p5, p6)]
    if p4 == 1:
        h += [f(s * 2, c + 1, m, p1, p2, p3, 0, p5, p6)]
    if p5 == 1:
        h += [f(s * 3, c + 1, m, p1, p2, p3, p4, 0, p6)]
    if p6 == 1:
        h += [f(s**2, c + 1, m, p1, p2, p3, p4, p5, 0)]
    return any(h) if (c + 1) % 2 == m % 2 else all(h)
        
for s in range(18):
    for m in range(1, 6):
        if f(s, 0, m, 1, 1, 1, 1, 1, 1):
            print(s, m)
            break
    
