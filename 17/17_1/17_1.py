k = 0
with open("17_v1_2.txt", 'r') as f:
    min = 2001
    lst = []
    for line in f:
        a = int(line)
        lst.append(a)
    for i in range(len(lst) - 1):
        if(lst[i] % 5 == 0 and lst[i + 1] % 5 == 0):
            k += 1
            s = lst[i] + lst[i + 1]
            if s < min:
                min = s
                
print(k, min)     

