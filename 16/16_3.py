def f(n):
    if n == 1:
        return 2
    if n % 2 == 0:
        return f(n - 1) + 2 * n
    else:
        return 3 * f(n - 2)
print(f(18))
