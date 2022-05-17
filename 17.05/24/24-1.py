with open("24-1.txt") as f:
    count = 0
    lst = []
    for line in f:
        for i in line.split():
            lst.append(i)
    for i in range(len(lst)):
        if lst[i] == 'C' and lst[i + 1] == 'B' and lst[i + 3] == "B" and lst[i + 4] == "C":
            if lst[i + 2] != "A" and lst[i + 2] != "B" and lst[i + 2] != "F":
                
                count += 1
