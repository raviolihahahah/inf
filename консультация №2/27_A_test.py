with open('27_A.txt') as f:
    n = int(f.readline())
    mn = 1000000; mx = 0
    lst = []
    for i in f:
        a, b = map(int, i.split())
        lst.append([a, b])
    for i in range(n):
        s = 0
        for j in range(n):
            if lst[j][1] % 36 == 0:
                s += abs(lst[i][0] - lst[j][0]) * lst[j][1] // 36
            else:
                s += abs(lst[i][0] - lst[j][0]) * (lst[j][1] // 36 + 1)
        if s < mn:
            res_i = lst[i][0]
            mn = s
    print(mn, res_i)
            
