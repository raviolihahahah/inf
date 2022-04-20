x = 27**12 + 3**102 - 54
k = 0
while(x > 0):
    if(x % 3 == 2):
        k += 1
    x = x // 3
print(k)
