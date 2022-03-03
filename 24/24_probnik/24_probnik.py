with open('24.txt', 'r') as f:
    a = f.readline()
for i in range(2500, 1, -1):
    if (a.find('AB' * i) != -1):
        print(i)
        break
