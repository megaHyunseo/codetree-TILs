n = int(input())

k = [0] * 1001

a = list(map(int, input().split()))

for i in a:
    k[i] += 1

for i in range(len(k) - 1, 0, -1):
    if k[i] == 1:
        print(i)
        break
else:
    print(-1)