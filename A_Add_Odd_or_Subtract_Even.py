def solve(a, b):
    diff = b - a
    if diff == 0:
        return diff
    elif diff > 0:
         return 2 if diff % 2 == 0 else 1
    else:
        return 1 if diff % 2 == 0 else 2

t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    print(solve(a, b))