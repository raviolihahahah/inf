s = '3' * 144
while '3333' in s or '223' in s:
    if '3333' in s:
        s = s.replace('3333', '223', 1)
    else:
        s = s.replace('223', '2', 1)
print(s.count('2'))
