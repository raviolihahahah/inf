with open("27-B.txt") as f:
    n = int(f.readline())
    q = 0
    ans = 0
    for i in range(0, n):
        ans += n - i
    print(ans)
