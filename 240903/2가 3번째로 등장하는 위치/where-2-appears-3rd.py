n = int(input())

a = list(map(int, input().split()))

cnt = 0
for i in a:
    if cnt == 3:
        print(a.index(i))
        break
    if i == 2:
        cnt += 1