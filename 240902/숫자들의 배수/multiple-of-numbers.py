n = int(input())

cnt = 0
ans = n
while True:
    if cnt == 2:
        break
    if ans % 5 == 0:
        cnt += 1
    print(ans, end=' ')
    ans += n