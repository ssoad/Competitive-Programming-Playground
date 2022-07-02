from unittest import result


n, k, l, c, d, p, nl, np = map(int, input().split())


one = (k*l)/nl
two = c*d
three = p*1
result = int(min(min(k * l / nl, c * d), p / np) / n)
print(result)