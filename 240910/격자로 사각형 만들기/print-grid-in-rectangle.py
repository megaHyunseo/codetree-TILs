n = int(input())

a = [
    [0 for i in range(n)]
    for j in range(n)
]

for i in range(n):
    a[0][i] = 1
    a[i][0] = 1

for i in range(1, n):
    for j in range(1, n):
        a[i][j] = a[i][j - 1] + a[i - 1][j - 1] + a[i - 1][j]

for i in range(n):
    for j in range(n):
        print(a[i][j], end=' ')
    print()