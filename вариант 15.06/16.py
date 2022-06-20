def g(n):
    s = 0
    while n > 0:
        s += n % 10
        n //= 10
    return s

def f(n):
    if n < 3:
        return 1
    if n > 2 and g(n) % 2 == 0:
        return f(n - 1) - f(n - 2)
    if n > 2 and g(n) % 2 != 0:
        return f(n - 1) + f(n // 2)
    

d = [0] * 101
d[1] = 1; d[2] = 1
for i in range(3, 101):
    if g(i) % 2 == 0:
        d[i] = d[i - 1] - d[i - 2]
    else:
        d[i] = d[i - 1] + d[i // 2]
print(d[100])
