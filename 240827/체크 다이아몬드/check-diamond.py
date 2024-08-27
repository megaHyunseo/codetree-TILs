n = int(input())

for i in range(n):
    for x in range(n - i, 1, -1):
        print(' ', end='')
    for y in range(0, i + 1):
        print('*', end=' ')
    print()
for i in range(n - 1, 0, -1):
    for x in range(n - i + 1, 1, -1):
        print(' ', end='')
    for y in range(1, i + 1):
        print('*', end=' ')
    print()