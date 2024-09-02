n1, n2 = map(int, input().split())

a = list(map(int, input().split()))
b = list(map(int, input().split()))

k = a.index(b[0])
cnt = 0
for i, n in enumerate(b):
    if a[k + i] == n:
        cnt += 1

if cnt == len(b):
    print('Yes')
else:
    print('No')