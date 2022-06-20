with open("17 (2).txt") as f:
    mx = 0; mx_s = 0
    count = 0
    lst = []
    for i in f:
        x = int(i)
        lst.append(x)
        if x % 41 == 0 and x > mx:
            mx = x
    for i in range(len(lst) - 1):
        s = lst[i] + lst[i + 1]
        if s < mx:
            count += 1
            if s > mx_s:
                mx_s = s
    print(count, mx_s)
