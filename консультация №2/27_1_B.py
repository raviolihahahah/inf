with open('27_B.txt') as f:
    n = int(f.readline())
    m = 36
    a = []
    for i in range(n):
        a.append(list(map(int, f.readline().split())))
        if a[i][1] % m == 0:
            a[i][1] =a[i][1] // m # заменяем количество пробирок на количество сумок
        else:
            a[i][1] =a[i][1] // m + 1
    cena = 0
    for i in range(1, n):
        r = a[i][0] - a[0][0]
        cena += r * a[i][1]
    min_cena = cena
    res_i = a[0][0]
    ls = 0 #количество сумок слева
    rs = 0
    for i in range(1, n): #вычисляем количество сумок справа
        rs += a[i][1]
    for i in range(1, n): #вычисляем суммарные расстояния для каждого пункта
        ls += a[i-1][1]
        rast = a[i][0] - a[i-1][0]
        cena = cena + rast*(ls - rs)
        rs -= a[i][1]
        if cena < min_cena:
            min_cena = cena
            res_i = a[i][0]
    print(min_cena, res_i)
    
    
    
        
