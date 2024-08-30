n = int(input())

cnt = 0
for i in range(n):
    a = sum(map(int, input().split())) / 4
    if a >= 60:
        print('pass')
        cnt += 1
    else:
        print('fail')

print(cnt)