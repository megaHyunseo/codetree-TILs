a = [
    [0 for _ in range(3)]
    for j in range(7)
]

for i in range(7):
    a[i] = list(map(int, input().split()))

for i in range(3):
    for j in range(3):
        a[i][j] = a[i][j] * a[i + 4][j]

for i in range(3):
    for j in range(3):
        print(a[i][j], end=' ')
    print()