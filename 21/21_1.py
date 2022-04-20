k = 0
def f(s, p):
    if (s >= 44 and s % 2 == 0) or p > 3:
        return p == 3
    if s % 2 == 0 or p == 1:
        if p % 2 == 0:
            return f(s + 1, p + 1) or f(s * 2, p + 1) or f(s * 3, p + 1)
        else:
            return f(s + 1, p + 1) and f(s * 2, p + 1) and f(s * 3, p + 1)
    else:
        return p == 2

for s in range(1, 43 + 1):
    if f(s, 1):
        k += 1
        print(s)
print(k)
