k = [0] * 4 # A ~ D

for i in range(3):
    a, b = input().split()
    b = int(b)

    if a == 'Y':
        if b >= 37:
            k[0] += 1 # A
        else:
            k[2] += 1 # C
    else:
        if b >= 37:
            k[1] += 1 # B
        else:
            k[3] += 1 # D

print(*k, end=' ')
if k[0] >= 2: # A가 2명 이상일 때: 위급상황
    print('E', end='')