def solve(n, arr):
    result = [0] * n
    odd_idx = 0
    even_idx = n-1
    for i in range(n):
        if arr[i] % 2 == 0:
            result[even_idx] = arr[i]
            even_idx -= 1
        else:
            result[odd_idx] = arr[i]
            odd_idx += 1

    return " ".join(str(_) for _ in result)


if __name__ == "__main__":

    t = int(input())

    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split(" ")))
        print(solve(n, arr))