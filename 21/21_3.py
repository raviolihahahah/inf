from itertools import*
count = 0
for i in product("AB", repeat = 3):
    for j in product("AB", repeat = 4):
        a = "".join(i)
        b = "".join(j)
        if(a[0] != b[0] or (a[2] != b[2] and a[1] == b[1])):
            count += 1
print(count * 2)
