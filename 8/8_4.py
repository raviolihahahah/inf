from itertools import*
count = 0
for i in permutations("BCDFGH", r = 6):
    a = "".join(i)
    if a[0] != 'B' and a[len(a) - 1] != 'B':
        count += 1
print(count)
