def solve(n, arr):

    for i in range(n):

        if arr[i] % 2 == 0:
            arr[i] -= 1

    return " ".join(map(str, arr))


if __name__ == "__main__":

    n = int(input())
    arr = list(map(int, input().split(" ")))
    print(solve(n, arr))