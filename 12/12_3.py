s = '3' * 150

while '32' in s or '3333' in s:
    if '32' in s:
        s = s.replace('32', '3', 1)
    else:
        s = s.replace('333', '332', 1)
if '3' in s:
    s = s.replace('3', '32', 1)
print(s)
