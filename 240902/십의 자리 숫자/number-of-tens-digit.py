k = [0] * 10 # 0, 1 ~ 9

a = list(map(int, input().split()))

for i in a:
    if i == 0:
        break
    k[i // 10] += 1

for i in range(1, 10):
    print(i, '-', k[i])