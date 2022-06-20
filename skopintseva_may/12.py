for i in range(1, 10000):
    s = '1' * 100 + '3' * i
    while '123' in s or '13' in s:
        if '123' in s:
            s = s.replace('123', '321', 1)
        else:
            s = s.replace('13', '12', 1)
    if s.count('2') == 10:
        print(i)
