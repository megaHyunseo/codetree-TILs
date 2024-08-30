a = list(map(int, input().split()))

ans = sum(a[1::2])

avg = 0
cnt = 0
for i in range(2, len(a), 3):
    avg += a[i]
    cnt += 1

avg = avg / cnt

print(ans, f'{avg:.1f}')