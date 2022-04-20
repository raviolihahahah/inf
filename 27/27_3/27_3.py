with open("27_A_v3.txt", 'r') as f:
    min = 20000
    s = 0
    n = int(f.readline())
    for line in f:
        a, b = map(int, line.split())
        if abs(a - b) % 31 != 0 and abs(a - b) < min:
            min = abs(a - b)
        s += max(a, b)
    if(s % 31 == 0):
        print(s - min)
    else:
        print(s)
