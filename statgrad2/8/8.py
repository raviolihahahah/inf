from itertools import*
k=0
for i in permutations('POCOMAXA'):
    a = ''.join(i)
    gl='AO'
    sog='PCMX'
    f=False
    for j in range(len(a)-1):
        if ((a[j] in gl) and (a[j+1] in gl)) or ((a[j] in sog) and (a[j+1] in sog)):
##            print(a)
            f=True
            
    if f:
        continue
    k += 1
print(k)
