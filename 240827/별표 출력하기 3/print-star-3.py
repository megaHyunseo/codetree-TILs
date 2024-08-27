n = int(input())

for i in range(n):
    for x in range(0, i):
        print('  ', end='')
    for y in range((n - i) * 2 - 1):
        print('* ', end='')
    print()