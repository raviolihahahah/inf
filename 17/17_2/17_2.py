count = 0
max = 0
with open("17_v1_2.txt", 'r') as f:
    lst = []
    for i in f:
        a = int(i)
        lst.append(a)
    for i in range(0, len(lst) - 2):
        if(lst[i] % 7 == 0 or lst[i + 1] % 7 == 0 or lst[i + 2] % 7 == 0):
            count += 1
            sum = lst[i] + lst[i + 1] + lst[i + 2]
            if(sum > max):
                max = sum
print(count, sum)
        
