def g(n):
    k = 0
    while(n):
        k += 1
        n //= 10
    if k == 2:
        return True
    return False

with open("17.txt") as f: 
    count = 0
    lst = []
    mn = 10000
    mx = 0
    for j in f:
        i = int(j)
        lst.append(i)
        if i % 17 == 0 and i < mn:
            mn = i
    for i in range(len(lst) - 1):
        a = lst[i]
        b = lst[i + 1]
        if (g(a) or g(b)):
            if lst[i] + lst[i + 1] < mn:
                count += 1
                if a + b > mx:
                    mx = a + b
    print(count, mx)
