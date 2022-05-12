def f(n):
    if n == 0:
        return 0
    if n % 3 != 0:
        return f(n - 1) + 1
    else:
        return f(n / 3)
def d(n):
    s = 0
    while n > 0:
        s += n %  3
        n //= 3
    return s
def k(n):
    s = ''
    while n > 0:
        s = str(n % 3) + s
        n  //= 3
    return s
print(k(16 * 10**8))
    
