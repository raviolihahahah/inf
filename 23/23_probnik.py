def f(st, fin):
    if st > fin and st == 15:
        return 0
    if st == fin:
        return 1
    return f(st + 1, fin) + f(st * 2, fin)
print(f(2, 12) * f(12, 32)
