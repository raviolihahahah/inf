def f(st, fin):
    if(st > fin):
        return 0
    if(st == fin):
        return 1
    return f(st + 1, fin) + f(st * 5, fin) + f(st * st, fin)
print(f(2, 8) * f(8, 70))
    
