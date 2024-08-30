n = int(input())

a = sum(map(int, input().split())) / 4
b = sum(map(int, input().split())) / 4
c = sum(map(int, input().split())) / 4

cnt = 0
if a >= 60:
    cnt += 1
    print('pass')
else:
    print('fail')
    
if b >= 60:
    cnt += 1
    print('pass')
else:
    print('fail')
    
if c >= 60:
    cnt += 1
    print('pass')
else:
    print('fail')

print(cnt)