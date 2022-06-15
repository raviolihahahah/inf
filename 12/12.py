a = []
d = set()
for i in range(1, 1000):
    s = i * '1'
    while '1111' in s or '222' in s or '33' in s:
        if '1111' in s:
            s = s.replace('1111', '333', 1)
        else:
            if '222' in s:
                s = s.replace('222', '11', 1)
            else:
                if '33' in s:
                    s = s.replace('33', '2', 1)
    d.add(s)
    f = 0
    for i in range(len(a)):
        f = 0
        if s == a[i]:
            f = 1
            break
    if f == 0:
        a.append(s)
    

print(len(d))
print(len(a))
