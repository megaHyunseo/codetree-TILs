n = int(input())

for i in range(n):
    for x in range(n - i, 1, -1):
        print('  ', end='')
    for y in range((i + 1) * 2 - 1):
        print('* ', end='')
    print()