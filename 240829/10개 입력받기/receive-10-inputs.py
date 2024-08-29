a = list(map(int, input().split()))

try:
    k = a.index(0)
except:
    pass

try:
    s = sum(a[:k])
    print(s, f'{s / k:.1f}')
except:
    s = sum(a[:])
    print(s, f'{s / k:.1f}')