n = int(input())

a = sum(map(float, input().split())) / n

print(f'{a:.1f}')

if a >= 4.0:
    print('perfect')
elif a >= 3.0:
    print('Good')
else:
    print('Poor')