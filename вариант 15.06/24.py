with open("24 (2).txt") as f:
    count = 0; mx = 0
    i = 0
    s = f.readline()
    while i < len(s) - 1:
        if s[i] == s[i + 1]:
            count += 1
            i += 1
        else:
            if count > mx:
                mx = count
            count = 0
        i += 1
    print(mx)
