def solve(n):

    result = [2] * int(n/2)
    if n % 2 != 0:
        result[int(n/2)-1] = 3

    return str(int(n/2)) + "\n" + " ".join(str(elem) for elem in result)


if __name__ == "__main__":

    n = int(input())
    print(solve(n))