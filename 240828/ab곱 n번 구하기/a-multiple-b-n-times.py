n = int(input())

for i in range(n):
    a, b = map(int, input().split())

    ans = 1
    for j in range(a, b + 1):
        ans *= j
    print(ans)