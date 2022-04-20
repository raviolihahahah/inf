with open("27_A.txt") as f:
    k = [0] * 3
    n = int(f.readline())
    for i in range(n):
        x = int(f.readline())
        k1 = k.copy()
        for j in range(3):
            k1[(j + x) % 3] += k[j]
        k1[x%3] += 1
        k = k1.copy()
print(k[0])
        
