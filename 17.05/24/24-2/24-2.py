with open("24-2.txt") as f:
    mx = 0
    for line in f:
        if line.count("E") < 20:
            for i in range(len(line)):
                for j in range(i + 1, len(line)):
                    if line[i] == line[j] and (j - i) > mx:
                        mx = j - i
    print(mx)
                
            
