a = list(map(int, input().split()))

cnt = 0
for i in range(len(a)):
    if a[i] == 0:
        print(*a[i-1::-1], end=' ')
        break
    cnt += 1

if cnt == 10:
    print(*a[::-1], end=' ')