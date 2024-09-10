n, m = map(int, input().split())

k = [
    [0 for i in range(n + 1)]
    for j in range(n + 1)
]

for i in range(m):
    a, b = map(int, input().split())
    k[a][b] = a * b

for i in range(1, n + 1):
    for j in range(1, n + 1):
        print(k[i][j], end=' ')
    print()