x = 5 * 8**15 + 2 * 16**60 + 7 * 2**36 + 88
count = 0
while(x > 0):
    if(x % 8 == 0):
        count += 1
    x //= 8
print(count)
