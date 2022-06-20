with open("26.txt") as f:
    lst = [[] for i in range(25000)]
    lst1 = lst.copy()
    count_c = [0] * 25000
    count_c_1 = [0] * 25000
    count_b = [0] * 25000
    mx = [False] * 25000
    for line in f:
        a, b, c = map(int, line.split())
        lst[a - 1].append(c)
        lst1[a - 1].append(b)
    for i in range(25000):
        for j in range(len(lst[i])):
            if lst[i][j] == 0:
                count_c[i] += 1
            else:
                count_c_1[i] += 1
    for i in range(25000):
        for j in range(1, len(lst1[i])):
            if (lst1[i][j] - lst1[i][j - 1] - 1 == 100) and (lst[i][j] ==  lst[i][j - 1] == 1):
                print("YES")
                mx[i] = True
                
    for i in range(len(mx) - 1, -1, -1):
        if mx[i] and count_c[i] >= 500:
            print(i + 1, count_c_1[i])
            break
            
            
        
