n = int(input())

k = 65
for i in range(n):
    for j in range(n):
        print(chr(k), end='')
        k += 1
    print()