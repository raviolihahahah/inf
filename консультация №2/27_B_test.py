with open("27_B.txt") as f:
    n = int(f.readline())
    m = 36
    lst = []
    for i in f:
        lst.append(list(map(int, i.split())))
    for i in range(n):
        if lst[i][1] % m == 0:
            lst[i][1] //= m
        else:
            lst[i][1] = lst[i][1] // 36 + 1
    s = 0
    rs = 0
    ls = 0
    for i in range(1, n):
        s += abs(lst[i][0] - lst[0][0]) * lst[i][1]
        rs += lst[i][1]
    mn = s
    for i in range(1, n):
        ls += lst[i - 1][1]
        rast = abs(lst[i][0] -lst[i - 1][0])
        s += rast * (ls - rs)
        rs -= lst[i][1]
        if s < mn:
            res_i = lst[i][0]
            mn = s
    
    print(mn, res_i)
