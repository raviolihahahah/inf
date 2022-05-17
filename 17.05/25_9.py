for i in range(10):
    for j in range(10):
        x = (103456709 + i * 10**7 + j * 10)
        if x % 17 == 0:
            print(x, x / 17)
            
