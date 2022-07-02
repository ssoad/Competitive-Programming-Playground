def solve(n, x, arr):

    arr.sort()

    curr_sum = total_rich = 0
    for i in range(n-1, -1, -1):
        curr_sum += arr[i]
        curr_avg = float(curr_sum)/ float(n - i)

        if curr_avg >= x:
            total_rich += 1
        else:
            break

    return total_rich


if __name__ == "__main__":

    t = int(input())

    results = list()
    for _ in range(0, t):
        n, x = map(int, input().split(" "))
        arr = list(map(int, input().split(" ")))
        results.append(solve(n, x, arr))

    for result in results:
        print(result)