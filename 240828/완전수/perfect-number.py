a, b = map(int, input().split())

cnt = 0

for i in range(a, b + 1):
    
    sum = 0
    for j in range(1, i):
        if i % j == 0:
            sum += j
    if i == sum:
        cnt += 1

print(cnt)