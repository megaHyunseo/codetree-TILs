n = int(input())

for i in range(n * 2):
    if i % 2 == 0:
        for x in range(i // 2 + 1):
            print('*', end=' ')
        print()
    else:
        for y in range((n - i // 2 - 1), -1, -1):
            print('*', end=' ')
        print()