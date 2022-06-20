##def f(st, fin):
##    if st < fin:
##        return 0
##    if st == fin:
##        return 1
##    return f(st - 1, fin) + f(st//2, fin)
##print(f(32, 13) * f(13, 1))
f = {32: 1}

for n in range(31, 0, -1):
    f[n] =  0
    f[n] += f[n + 1]
    for x in f:
        if x // 2 == n:
            f[n] += f[x]
    if n == 13:
        for x in range(32, n, -1):
            f[x] = 0
print(f[1])
