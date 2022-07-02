def solve(n, m, grid):

    track_row = set()

    track_col = set()

    for i in range(n):

        for j in range(m):

            if grid[i][j] == '1':

                track_row.add(i)
                track_col.add(j)

    min_moves_possible = min(n - len(track_row), m - len(track_col))

    return "Ashish" if min_moves_possible % 2 == 1 else "Vivek"


if __name__ == "__main__":

    t = int(input())

    results = list()
    for _ in range(t):
        n, m = map(int, input().split(" "))

        grid = list()
        for _ in range(n):
            row = input().split(" ")
            grid.append(row)
        results.append(solve(n, m, grid))

    for result in results:
        print(result)