n, m = map(int, input().split())

k = [
    [0 for i in range(n + 1)]
    for i in range(n + 1)
]

cnt = 1

for i in range(m):
    a, b = map(int, input().split())
    k[a][b] = cnt
    cnt += 1

for i in range(1, n + 1):
    for j in range(1, n + 1):
        print(k[i][j], end=' ')
    print()