def f(a, b, c, m):
    if (a + b) >= 111:
        return c % 2 == m % 2
    if c == m:
        return 0
    h = [f(a + 3, b, c + 1, m), f(a, b + 3, c + 1, m), f(a * 2, b, c + 1, m)]
    return any(h) if (c + 1) % 2 == m % 2 else all(h)

for s in range(1, 99):
    for m in range(1, 5):
        if f(s, 12, 0, m):
            print(s, m)
            break
