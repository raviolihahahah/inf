s = '2' * 2 + '3' * 102 + '4' * 6
while ('23' in s or '24' in s):
    if('23' in s):
        s = s.replace('23', '2', 1) 
    else:
        s = s.replace('24', '3', 1)
print(s)
