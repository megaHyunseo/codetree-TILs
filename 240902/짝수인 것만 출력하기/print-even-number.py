n = int(input())

a = list(map(int, input().split()))

k = [i for i in a if i % 2 == 0]

print(*k)