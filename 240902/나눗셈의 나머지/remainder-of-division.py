k = [0] * 10

a, b = map(int, input().split())

while a >= 1:
    k[a % b] += 1
    a = a // b

ans = [k[i] ** 2 for i in range(10)]

print(sum(ans))