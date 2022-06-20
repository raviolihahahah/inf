def f(st, fin):
    if st > fin:
        return 0
    if st == fin:
        return 1
    return f(st + 1,fin) + f(st + 2, fin)
print(f(11, 17) * f(17, 23) * f(23, 29))
