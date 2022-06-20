count = 0
def f(n):
    if n == 0:
        return 0
    if n % 3 == 0:
        return f(n / 3) + 4
    return f(n - 1) + n
for n in range(3000):
    if f(n) == 680:
        count += 1
    
print(count)
