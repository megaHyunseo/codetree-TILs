a = [
    [0 for i in range(5)]
    for j in range(5)
]

for i in range(5):
    a[0][i] = 1
    a[i][0] = 1

for i in range(1, 5):
    for j in range(1, 5):
        a[i][j] = a[i - 1][j] + a[i][j - 1]

for i in range(5):
    for j in range(5):
        print(a[i][j], end=' ')
    print()