a = list(map(int, input().split()))

for i in a[:]:
    if i == 0:
        print(*a[i-2::-1])
        break