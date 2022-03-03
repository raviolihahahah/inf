with open("27.txt") as f:
    n = int(f.readline())
    k = [0] * 12
    for i in range(n):
        x = int(f.readline())
        k1 = k.copy()
        for j in range(12):
            k1[(j+x)%12] += k[j]
        k1[x%12] += 1
        k = k1.copy()
    print(k[0])
            
