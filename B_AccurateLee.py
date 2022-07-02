'''
Author : Sohanuzzaman Soad
University of Asia Pacific, Bangladesh
'''



def solve(n, s):

    is_present_10 = False
    for i in range(n-1):

        if s[i] > s[i+1]:
            is_present_10 = True
            break

    if not is_present_10:
        return s

    i = 0
    while i < n and s[i] == '0':
        i += 1

    leading_zeroes = i

    i = n-1
    while i >= 0 and s[i] == '1':
        i -= 1

    trailing_ones = n - i - 1

    return ('0' * leading_zeroes) + '0' + ('1' * trailing_ones)


if __name__ == "__main__":

    t = int(input())

    results = list()
    for _ in range(t):
        n = int(input())
        s = input()
        results.append(solve(n, s))

    for result in results:
        print(result)