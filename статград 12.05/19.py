def f(s, p):
    if s >= 41 or p > 5:
        return p == 3 or p == 5
    else:
        if p % 2 == 1:
            return f(s + 1, p + 1) and f(s + 2, p + 1) and f(s * 2, p + 1)
        else:
            return f(s + 1, p + 1) or f(s + 2, p + 1) or f(s * 2, p + 1)
for i in range(1, 40 + 1):
    if f(i, 1):
        print(i)
