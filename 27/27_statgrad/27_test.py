with open("27-A.txt") as f:
    n = int(f.readline())
    ans = 0
    for i in range(1, n + 1):
        ans += i
    print(ans)
