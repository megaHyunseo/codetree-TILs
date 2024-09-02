k = [0] * 10 # 0 ~ 9

n = int(input())

a = list(map(int, input().split()))

for i in a:
    k[i] += 1

for i in range(1, 10):
    print(k[i])