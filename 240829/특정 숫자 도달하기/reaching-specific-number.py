a = list(map(int, input().split()))

ans = 0
for i in range(len(a)):
    if a[i] < 250:
        ans += a[i]
    else:
        print(ans, end=' ')
        print(f'{ans / (i + 1):.1f}')
        break