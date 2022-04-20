with open("27_B_v4.txt") as f:
    n = int(f.readline())
    lst = [-1] * 67
    lst[0] = 0
    s = 0
    for line in f:
        a, b = map(int, line.split())
        d = abs(a - b)
        s += max(a, b)
        r = d % 67
        if r > 0:
            lst1 = lst.copy()
            for j in range(67):
                if (d + lst[j] < lst[(d + j) % 67] or lst[(d + j) % 67] == -1) and (lst[j] != -1):
                    lst1[(d + j) % 67] = lst[j] + d
            lst = lst1.copy()
    if s % 67 != 0:
        s -= lst[s % 67]
    print(s)
    
            
        
 
 
 
