a = list(map(int, input().split()))

k = a.index(0)

try:
    print(*a[k-1::-1])
except:
    print(*a[::-1])