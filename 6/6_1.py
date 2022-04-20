n = 1
k = 0
for i in range(-1000, 1000, 1):
    s = i
    n = 1
    while(s <= 59):
        s += 20
        n *= 3
    if n == 81:
        k += 1
print(k)
