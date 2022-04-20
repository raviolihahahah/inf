from itertools import*
k = 0
for i in product("ABCDE", repeat = 4):
    a = ''.join(i)
    if(a.count("A") == 2 and a[0] != "E"):
        k += 1

print(k)
