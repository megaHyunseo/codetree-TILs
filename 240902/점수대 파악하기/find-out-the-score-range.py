k = [0] * 11 # 0, 1 ~ 10

a = list(map(int, input().split()))

for i in a:
    if i == 0:
        break
    k[i // 10] += 1

for i in range(10, 0, -1):
    print(i * 10, '-', k[i])