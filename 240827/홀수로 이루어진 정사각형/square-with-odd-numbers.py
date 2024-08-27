n = int(input())

k = 11

for i in range(n):
    for j in range(n):
        print(k + (j * 2), end=' ')
    print()
    k += 2