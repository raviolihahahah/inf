from itertools import*
k = 0
for i in product("0123456", repeat = 7):
    a = ''.join(i)
    if(a[0] != '3' and a[0] != '5' and a[0] != '0'):
        if('22' not in a or '44' not in a):
            k += 1

print()
