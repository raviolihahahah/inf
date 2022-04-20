def f(s, p):
    if (s >= 44 and s % 2 == 0) or p > 3:
        return p == 3
    if s % 2 == 0 or p == 1:
        return f(s + 1, p + 1) or f(s * 2, p + 1) or f(s * 3, p + 1)
    else:
        return False

for s in range(1, 43 + 1):
    if f(s, 1):
        print(s)
        break
else:
    print("F")
