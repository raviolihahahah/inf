with open("27-B.txt") as f:
    k = 0; q = 0
    n = int(f.readline())
    s = 0
    count = [0] * 980869
    for i in range(n):
        s += int(f.readline())
        k += count[s % 980869]
        count[s % 980869] += 1
        if s % 980869 == 0:
            k += 1
    print(k)
        
                    
            
