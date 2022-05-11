x = 95 * 10**7
for k in range(2, 1000000, 2):
    y = x + k; count_2 = 0; i = 3
    while y % 2 == 0:
        count_2 += 1
        y //= 2
    if count_2 % 2 == 0:
        continue
    f = 1
    while y != 1:
        count = 0
        f_d = 1
        while i * i <= y:
            if y % i == 0:
                while y % i == 0:
                    f_d = 0
                    count += 1
                    y //= i
                i += 1
                break
            i += 1
        if count % 2 == 1:
            f = 0
            break
        if f_d:
            f = 0
            break
    if f:
        print(k)
            
