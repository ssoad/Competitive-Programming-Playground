def solve(n, m, s, t, years):

    year_list = list()

    for year in years:
        year_list.append(s[(year -1) % n] + t[(year -1) % m])

    return "\n".join(year_list)


if __name__ == "__main__":

    n, m = map(int, input().split(" "))
    s = input().split(" ")
    t = input().split(" ")
    q = int(input())
    years = list()
    for _ in range(q):
        year = int(input())
        years.append(year)
    print(solve(n, m, s, t, years))