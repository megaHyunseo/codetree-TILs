n = int(input())

k = 'A'

for i in range(n):
    for x in range(i):
        print(' ', end=' ')
    for y in range(n - i):
        print(chr(ord(k)), end=' ')
        k = chr(ord(k) + 1)
        if k > 'Z':
            k = 'A'
    print()