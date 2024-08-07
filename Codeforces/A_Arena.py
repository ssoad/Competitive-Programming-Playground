'''
 * @author Md. Sohanuzzaman Soad
 * @email mdsoad@gmail.com
 * @university  University of Asia Pacific, Bangladesh
 * @create date 2022-07-02 16:47:51
 * @modify date 2022-07-02 16:49:22
'''


def solve(n, arr):
    min_elem = min(arr)
    min_elem_freq = arr.count(min_elem)
    return n - min_elem_freq


t = int(input())

for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    print(solve(n, arr))