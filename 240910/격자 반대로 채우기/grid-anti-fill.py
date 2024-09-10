'''
33
32
31
30

20
21
22
23

13
12
11
10

01
02
03
04
'''
n = int(input())

a = [
    [0 for i in range(n)]
    for i in range(n)
]

cnt = 1
for i in range(n - 1, -1, -1):
    for j in range(n - 1, -1, -1):
        if i % 2 == 1:
            a[j][i] = cnt
        else:
            a[n - 1 - j][i] = cnt
        cnt += 1

for i in range(n):
    for j in range(n):
        print(a[i][j], end=' ')
    print()