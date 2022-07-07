def solve(n, num):
    x1 = int("1" + "0" * (n - 1) + "1")
    x2 = int("1" * (n + 1))

    return str(x1 - num) if len(str(x1 - num)) == n else str(x2 - num)


t = int(input())

for _ in range(t):
    n = int(input())
    num = int(input())
    print(solve(n,num))
   