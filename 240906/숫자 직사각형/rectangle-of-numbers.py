n, m = map(int, input().split())

k = [
    [0 for _ in range(m)]
    for _ in range(n)
]

num = 1
for i in range(n):
    for j in range(m):
        k[i][j] = num
        num += 1

for i in range(n):
    for j in range(m):
        print(k[i][j], end=' ')
    print()