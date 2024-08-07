'''
 * @author Md. Sohanuzzaman Soad
 * @email mdsoad@gmail.com
 * @university  University of Asia Pacific, Bangladesh
 * @create date 2022-07-02 16:47:51
 * @modify date 2022-07-02 16:49:22
'''



def solve(s):

    t = "heidi"
    j = 0
    t_len = len(t)
    s_len = len(s)
    for i in range(s_len):
        if s[i] == t[j]:
            j += 1
            if j == t_len:
                break

    return "YES" if j == t_len else "NO"


str = input()
print(solve(str))