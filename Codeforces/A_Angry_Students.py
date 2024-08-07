def solve(n, stds):

    an_index = -1
    p_cnt = 0
    max_p_cnt = 0

    for i in range(n):

        if stds[i] == 'A':
            an_index = i
            p_cnt = 0
        elif an_index != -1:
            p_cnt += 1

        max_p_cnt = max(p_cnt, max_p_cnt)

    return max_p_cnt


if __name__ == "__main__":

    t = int(input())

    for _ in range(t):
        n = int(input())
        stds = input()
        print(solve(n, stds))