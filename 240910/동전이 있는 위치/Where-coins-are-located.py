n, m = map(int, input().split())

k = [
    [0 for i in range(n + 1)]
    for i in range(n + 1)
]

for i in range(m):
    a, b = map(int, input().split())
    k[a][b] = 1

for i in range(n):
    for j in range(n):
       print(k[i][j], end=' ')
    print()