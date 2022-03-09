from itertools import*
k = 0
arr = [0] * 10000
for i in product("12", repeat = 11):
    num = 3
    a = ''.join(i)
    for j in range(11):
        if(a[j] == '1'):
            num += 1
        elif(a[j] == '2'):
            num = num * 2 + 1
    if(arr[num] == 0):
        k += 1
        arr[num] += 1

print(k)
