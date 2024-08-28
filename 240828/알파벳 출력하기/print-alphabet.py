n = int(input())

k = 'A'

for i in range(1, n + 1):
    for j in range(i):
        print(chr(ord(k)), end='')
        k = chr(ord(k) + 1)
        if k == 'Z':
            k = 'A'
    print()