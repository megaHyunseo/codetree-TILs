a = [
    list(input().split())
    for i in range(5)
]

for i in range(5):
    for j in range(3):
        print(a[i][j].upper(), end=' ')
    print()