count = 0
for i in range(1, 100000):
    s = i
    n = 0
    while s <= 115:
        s += 14
        n += 25
    if n > 199:
        count += 1
print(count)
