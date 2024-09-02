n = int(input())

a = [1, n]

while True:
    if a[-1] > 100:
        break
    a = a + [a[-1] + a[-2]]

print(*a)