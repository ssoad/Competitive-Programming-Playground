def solve(n, heights):

    max_value = heights[0]
    max_valueIdx = 0
    min_value = heights[n-1]
    min_valueIdx = n-1

    for i in range(n):
        if heights[i] > max_value:
            max_value = heights[i]
            max_valueIdx = i

        if heights[i] <= min_value:
            min_value = heights[i]
            min_valueIdx = i

    swaps = max_valueIdx
    swaps += (n - 1) - min_valueIdx

    if max_valueIdx > min_valueIdx:
        swaps -= 1

    return swaps



n = int(input())
heights = list(map(int,input().split(" ")))
print(solve(n, heights))