with open("27-A.txt") as f:
    n = int(f.readline())
    count = 0
    x = 980869
    p89 = 0; p103 = 0; p107 = 0
    for i in range(n):
        a = int(f.readline())
        if a % 89 == 0:
            p89 = i
        if a % 103 == 0:
            p103 = i
        if a % 107 == 0:
            p107 = i
        if p89 != 0 and p103 != 0 and p107 != 0:
            count += min(p89, p103, p107) + 1
print(553878 - count)
                    
            
