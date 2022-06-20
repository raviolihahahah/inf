for i in range(123458, 12349958):
    a = str(i)
    if a[:4] == '1234' and a[len(a)-2:] == '58' and int(a) % 19 == 0:
        print(a, int(a) // 19 )
