k = [0] * 7 # 0, 1 ~ 6

a = list(map(int, input().split()))

for i in a:
    k[i] += 1

for i in range(1, 7):
    print(i, '-', f'{k[i]}')