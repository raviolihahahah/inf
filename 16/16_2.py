def f(n):
    if n == 0:
        return 1
    return f(n - 3) * g(n - 3)
def g(n):
    if n == 0:
        return 2
    return f(n - 3) + g(n - 3)
print(f(9) - g(9))
