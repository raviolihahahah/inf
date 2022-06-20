n = 216**6 + 216**4 + 36**6 - 6**14 - 24
s = set()
st = ''
while n > 0:
    st = str(n%6) + st
    s.add(n % 6)
    n //= 6
print(st, len(s))
