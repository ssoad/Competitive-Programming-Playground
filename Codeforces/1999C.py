def can_cover_range(l, r, intervals):
    # Sort intervals by starting point
    intervals.sort()
    
    current_end = l
    for start, end in intervals:
        if start > current_end:
            break
        current_end = max(current_end, end)
        if current_end >= r:
            return "YES"
    return "NO"

# Read input
t = int(input())
for _ in range(t):
    l, r, n = map(int, input().split())
    intervals = [tuple(map(int, input().split())) for _ in range(n)]
    
    result = can_cover_range(l, r, intervals)
    print(result)
