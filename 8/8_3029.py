from itertools import*
k = 0
for i in product("012345678", repeat = 7):
    a = ''.join(i)
    if(a[6] != '3' and a[6] != '4' and a[6] != '7' and a[0] != '0'):
        for i in range(5):
            if(a[i] == a[i + 1] and a[i + 1] == a[i + 2]):
                break
        else:
            k += 1

print(k)
    
