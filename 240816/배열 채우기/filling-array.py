a = list(map(int, input().split()))

try:
    k = a.index(0)
except:
    pass

try:
    print(*a[k-1::-1])
except:
    print(*a[::-1])