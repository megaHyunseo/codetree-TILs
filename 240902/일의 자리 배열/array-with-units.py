a, b = map(int, input().split())

k = [a, b]

for i in range(2, 10):
    k.append((k[-1] + k[-2])%10)

print(*k)


'''
a, b = map(int, input().split())

k = [a, b]

for i in range(2, 10):
    k[i] = (k[-1] + k[-2])%10

print(*k)

처음에 이렇게 코드를 작성했는데 오류가 났다.

<이유 1>
line 14에서 k의 index가 1까지 존재하지만,
line 17에서 k[i] 코드를 통해 존재하지 않는 2번지에 할당하기 때문이다.

만약 line 14를 k = [a, b, 0, 0, 0, 0, 0, 0, 0, 0]로 한다면 해결 될 일이다.

<이유 2>
line 26에서 k 값을 0으로 채운다면 -1과 -2번지는 0이므로 0으로 다 채워질 것이다.
그러므로 현재 번지 값을 나타내는 i번지 값을 가져오는 코드로 작성해야 한다.
k[i] = (k[i - 1] + k[i - 2])%10
'''