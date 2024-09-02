a, b = map(int, input().split())

k = [a, b]

for i in range(2, 10):
    k = k + [k[i - 1] + (2 * k[i - 2])]

print(*k)