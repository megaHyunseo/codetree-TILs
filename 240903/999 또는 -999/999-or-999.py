a = list(map(int, input().split()))

max = a[0]
min = a[0]

for i in range(1, len(a) + 1):
    if a[i] == 999 or a[i] == -999:
        break
    if a[i] > max:
        max = a[i]
    if a[i] < min:
        min = a[i]
print(max, min)