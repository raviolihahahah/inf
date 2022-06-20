n = 216**6 + 216**4 + 36**6 - 6**14 - 24
a = [0]*6
while n > 0:
    a[n%6] += 1
    n //= 6
count = 0
for i in range(6):
    if a[i] != 0:
        count += 1
print(count)
