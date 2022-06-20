with open("26.txt") as f:
    count = 0
    n = int(f.readline())
    a = []; b = []
    for i in range(n):
        a.append(int(f.readline()))
    a.sort(reverse = True)
    mx = a[0]
    for i in range(1, len(a)):
        if mx >= a[i] + 5:
            count += 1
            mx = a[i]
    print(mx, count)
