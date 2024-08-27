n = int(input())

for i in range(n):
    for x in range(0, i):
        print(' ', end=' ')
    for y in range((n - i) * 2 - 1):
        print('*', end=' ')
    print()
for i in range(n - 1, 0, -1):
    for x in range(1, i):
        print(' ', end=' ')
    for y in range((n - i + 1) * 2 - 1):
        print('*', end=' ')
    print()