a = list(map(int, input().split()))

max = 1001
min = 0

for i in a:
    if i < 500 and i > min:
        min = i
    if i > 500 and i < max:
        max = i

print(min, max)