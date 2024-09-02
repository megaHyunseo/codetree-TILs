n, q = map(int, input().split())

k = list(map(int, input().split()))

for i in range(q):
    a = list(map(int, input().split()))

    if a[0] == 1:
        print(k[a[1] - 1])
    elif a[0] == 2:
        try:
            print(k.index(a[1]) + 1)
        except:
            print(0)
    else:
        for j in range(a[1] - 1, a[2]):
            print(k[j], end=' ')