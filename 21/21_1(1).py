def f(s, p):
    if (s >= 44 or p > 5) and s % 2 == 0:
        return p == 5 or p == 3	    x
    if s % 2 == 0 or p == 1:
        if p % 2 != 0:
            return f(s + 1, p + 1) and f(s * 2, p + 1) and f(s * 3, p + 1)
        else:
            return f(s + 1, p + 1) or f(s * 2, p + 1) or f(s * 3, p + 1)
    else:
        return p == 2 or p == 4
for s in range(1, 43 + 1):
    if f(s, 1):
        print(s)
