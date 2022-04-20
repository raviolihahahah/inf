def f(st, fin):
    if st > fin or st == 14:
        return 0;
    if st == fin:
        return 1
    return f(st + 1, fin) + f(st + 3, fin) + f(st * 3, fin)
print(f(3, 7) * f(7, 21))
    
