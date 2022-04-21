with open("27-B.txt") as f:
    n = int(f.readline())
    a = []
    for i in range(n):
        a.append(int(f.readline()))
    sym = sum(a)
    sr = [0]*n
    sr[0] = sum(a[0:n//2])
    for i in range(1, n):
        sr[i] = sr[i-1] - a[i-1] + a[(i-1+n//2)%n]
    sl = [0]*n
    for i in range(n):
        sl[i] = sym - sr[i]
    res = 0
    for i in range(n//2):
        res += i*a[i]
    for i in range(n//2,n):
        res += (n-i)*a[i]
    msum = []
    msum.append(res)
    for i in range(1, n):
        res -= sr[i]
        res += sl[i]
        msum.append(res)
        
#print(msum)
print(msum.index(min(msum))+1)
