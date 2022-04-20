def f(st, fin):
    if(st > fin):
        return 0
    if(st == fin):
        return 1
    return f(st + 1, fin) + f(st * 2, fin)

print(f(1, 10)*f(10, 20))
