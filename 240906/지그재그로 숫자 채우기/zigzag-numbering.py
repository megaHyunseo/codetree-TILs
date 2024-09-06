n, m = map(int, input().split())

a = [[0 for _ in range(m)] for _ in range(n)]

cnt = 0

for i in range(m):
    if i % 2 == 0:
        for j in range(n):
            a[j][i] = cnt
            cnt += 1
    else:
        for j in range(n - 1, -1, -1):
            a[j][i] = cnt
            cnt += 1

for row in a:
    print(' '.join(map(str, row)))