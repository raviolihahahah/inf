x = 3 * 5**1984 - 7 * 25**777 - 11 * 125**666- 404
count = 0
x *= -1
while x > 0:
    if x % 5 == 2:
        count += 1
    x //= 5
print(count)
