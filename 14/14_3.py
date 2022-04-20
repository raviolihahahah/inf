x = (64**30 - 16**20)**2 + 63
count = 0
while(x > 0):
    if(x % 4 == 3):
        count += 1
    x = x // 4
print(count)
