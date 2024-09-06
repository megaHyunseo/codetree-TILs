n = int(input())

a = [
    [0 for _ in range(n)]
    for _ in range(n)
]

cnt = 1
for i in range(n):
    for j in range(n):
        a[j][i] = cnt
        cnt += 1

for i in a:
    for j in i:
        print(j, end=' ')
    print()