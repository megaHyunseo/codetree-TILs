a = list(map(int, input().split()))

ans = 0
cnt = 0
for i in range(len(a)):
    if a[i] < 250:
        ans += a[i]
    else:
        break
    cnt += 1

print(ans, end=' ')
print(f'{ans / cnt:.1f}')