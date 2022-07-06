'''
 * @author Md. Sohanuzzaman Soad
 * @email mdsoad@gmail.com
 * @create date 2022-07-02 16:51:13
 * @modify date 2022-07-02 16:51:13
'''


def solve(s):

    s = s[1:-1]
    if s == '':
        return 0
    chars = s.split(", ")
    return len(set(chars))

s = input()
print(solve(s))