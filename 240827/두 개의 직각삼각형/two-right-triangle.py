n = int(input())

for i in range(n):
    for x in range(n - i, 0, -1):
        print('*', end='')
    for y in range(0, i):
        print('  ', end='')
    for x in range(n - i, 0, -1):
        print('*', end='')
    print()