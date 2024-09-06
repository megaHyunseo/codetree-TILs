a = [
    list(map(int, input().split()))
    for i in range(2)
]

print(f'{sum(a[0]) / 4:.1f}', f'{sum(a[1]) / 4:.1f}')
for i in range(4):
    s = 0
    for j in range(2):
        s += a[j][i]
    print(f'{s / 2:.1f}', end=' ')
print()

print(f'{sum(sum(a, [])) / 8:.1f}')
# 안쪽의 sum(a, [])으로 list a를 2차원 -> 1차원으로 평탄화 하고, 바깥쪽 sum()으로 1차원으로 바뀐 리스트 합계