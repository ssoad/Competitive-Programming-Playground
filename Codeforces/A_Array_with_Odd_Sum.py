'''
 * @author Md. Sohanuzzaman Soad
 * @email mdsoad@gmail.com
 * @university  University of Asia Pacific, Bangladesh
 * @create date 2022-07-02 16:47:51
 * @modify date 2022-07-02 16:49:22
'''


def solve(n, nums_arr):

    even = odd = 0

    for i in range(n):
        if nums_arr[i] % 2 == 0:
            even += 1
        else:
            odd += 1

    return "NO" if odd == 0 or (even == 0 and odd % 2 == 0) else "YES"


t = int(input())

results = list()
for _ in range(t):
    n = int(input())
    nums_arr = list(map(int, input().split()))
    results.append(solve(n, nums_arr))

for result in results:
    print(result)