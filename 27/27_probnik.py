with open("27_B.txt") as f:
    n=int(f.readline())
    p = 67
    sum_ost=[1359887472]*p #Массив, который содержит минимальные суммы для разных остатков
    k=[0]*p #Запоминаем, при каком i сохранили в sum_ost очередную сумму.

    mx=0 #Максимальная сумма нужной цепочки в данный момент времени
    ln=0 #Длина нужной цепочки

    s=0 #Сумма цепочки с первого до i-ого элемента

    sum_ost[0]=0 #Для остатка ноль ничего от s отнимать не нужно
    k[0]=-1  #Для остатка ноль индекс равен -1, чтобы правильно считалась длина цепочки


    for i in range(n):
        x=int(f.readline())
        s = s + x
        ost = s % p

        if s-sum_ost[ost]==mx:
            ln=min(ln, i - k[ost])

        if s-sum_ost[ost] > mx:
            mx = s - sum_ost[ost]
            ln = i - k[ost]
        
        if sum_ost[ost]==1359887472:
            sum_ost[ost] = s
            k[ost] = i
    
print(mx)
