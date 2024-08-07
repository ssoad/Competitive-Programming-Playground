import math


def solve(a, b, c, d):

    if a <= b:
        return b

    elif c <= d:
        return -1

    else:
        sleep_needed = a - b
        inter_alarm_sleep = c - d

        inter_alarm_segments_needed = math.ceil(float(sleep_needed) / float(inter_alarm_sleep))

        return int(inter_alarm_segments_needed * c) + b


if __name__ == "__main__":

    t = int(input())

    results = list()
    for _ in range(t):
        a, b, c, d = map(int, input().split(" "))
        results.append(solve(a, b, c, d))

    for result in results:
        print(result)