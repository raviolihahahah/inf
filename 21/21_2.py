count = 0
def f(s, p):
    if (s >= 51 and s % 2 != 0) or p > 5:
        return p == 5
    if s % 2 != 0 or p == 1:
        if p % 2 != 0:
            return f(s + 1, p + 1) and f(s + 3, p + 1) and f(s * 3, p + 1)
        else:
            return f(s + 1, p + 1) or f(s + 3, p + 1) or f(s * 3, p + 1)
    else:
        return p == 4 or p == 2
for s in range(1, 50 + 1):
    if f(s, 1):
        print(s)
        count += 1
print(count)
