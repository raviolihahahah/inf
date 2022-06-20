x = 0
for i in range(102, 171):
    x += 12 * 16**i
count = 0
while(x):
    if x % 8 == 0:
        count += 1
    x //= 8
print(count)
