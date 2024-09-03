n = int(input())

k = [0] * (n + 1)
m = []

a = list(map(int, input().split()))

for i in a:
    k[i] += 1

cnt = -1

try:
    if k.index(1):
        for i in range(len(k), -1, -1):
            if k[i] == 1:
                print(k[i])
                break
except:
    print(-1)