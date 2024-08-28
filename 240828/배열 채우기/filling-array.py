a = list(map(int, input().split()))

cnt = 0
for i in a[:]:
    if i == 0:
        print(*a[i-2::-1])
        break

if cnt == 0:
    print(*a[::-1])