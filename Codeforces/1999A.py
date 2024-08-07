n = int(input())
for i in range(n):
    a = input()
    sum = 0
    for j in range(len(a)):
        sum += int(a[j])
    print(sum)