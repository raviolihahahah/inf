x = 3 * 7**258 + 343**90 - 2 * 7**64 - 98
count = 0
while x > 0:
    if x % 7 == 0:
        count += 1
    x = x // 7
print(count)
