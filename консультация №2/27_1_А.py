with open('27_A.txt') as f:
    n = int(f.readline())
    a = []
    for i in range(n):
        a.append(list(map(int, f.readline().split())))
    min_cena, res_i = 100000000, 0
    m = 36
    for i in range(n):
        cena = 0
        for j in range(n):
            r = abs(a[j][0]-a[i][0])
            if a[j][1] % m == 0:
                k = a[j][1]//m
            else:
                k = a[j][1]//m + 1
            cena += k*r
        if cena < min_cena:
            min_cena = cena
            res_i = a[i][0]
    print(min_cena, res_i)
            
