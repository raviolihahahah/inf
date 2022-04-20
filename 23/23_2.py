def f(st, fin):
    if(st > fin or st == 15):
        return 0
    if st == fin:
        return 1
    return f(st + 1, fin) + f(st + 2, fin) + f(st * 3, fin)
print(f(2, 6) * f(6, 17))
