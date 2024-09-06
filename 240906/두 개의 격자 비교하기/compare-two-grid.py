n, m = map(int, input().split())

a = [
    list(map(int, input().split()))
    for _ in range(n)
]

b = [
    list(map(int, input().split()))
    for _ in range(n)
]

c = [
    [0 for _ in range(m)]
    for _ in range(n)
]

for i in range(n):
    for j in range(m):
        if a[i][j] == b[i][j]:
            c[i][j] = 0
        else:
            c[i][j] = 1

for i in c:
    for j in i:
        print(j, end=' ')
    print()