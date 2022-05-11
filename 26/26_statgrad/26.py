with open("26.txt") as f:
    n = int(f.readline()); count = 0;  mx = 0
    lst = [[0] * 10000 for i in range(10000)]
    for line in f:
        a, b = map(int, line.split())
        lst[a - 1][b - 1] = 1
    mx_row = 0
    mx_ln = 0
    for i in range(10000):
        count = 0
        r = 10**20
        for j in range(10000):
            if lst[i][j] == 1:
                count += 1
                r = min(r, i, j, 10000 - i - 1, 10000 - j - 1)
                if count > mx or (mx == count and r < mx_ln):
                    mx = count
                    mx_ln = r
                    mx_row = i + 1
            else:
                count = 0
                r = 10**20
    print(mx_row, mx_ln)
                
