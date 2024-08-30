a = list(map(int, input().split()))

k = a.index(0)

print(a[k - 1] + a[k - 2] + a[k - 3])