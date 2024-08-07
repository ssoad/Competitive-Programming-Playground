'''
Author : Sohanuzzaman Soad
University of Asia Pacific, Bangladesh
'''

t = int(input())
for i in range(t):
    x,y = map(int, input().split())
    a,b = map(int, input().split())
    if x > y:
        x,y = y,x
    ans1, ans2 = 0, 0
    ans1 = x*a + y*a
    z = y - x
    ans2 = z*a + x * b

    print(min(ans1,ans2))
