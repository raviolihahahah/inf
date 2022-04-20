def f(st, fin):
    if st > fin:
        return 0
    if st == fin:
        return 1
    return f(st + 1, fin) + f(st * 4, fin) + f(st * st, fin)
print(f(2, 10) * f(10, 60))
