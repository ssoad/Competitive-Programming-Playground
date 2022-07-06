'''
Author : Md. Sohanuzzaman Soad
University of Asia Pacific, Bangladesh
'''

def solve(n, str):
    anton, danik = 0,0

    danik = str.count('D')
    anton = str.count('A')
    
    return "Anton" if anton > danik else "Danik" if anton < danik  else "Friendship"


# Driver code
n = int(input())
s = input()
print(solve(n, s))