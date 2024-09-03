n = int(input())

a = list(map(int, input().split()))

cnt = 0
for i in range(len(a)):
    if cnt == 3:
        print(a[i - 1])
        break
    if i == 2:
        cnt += 1