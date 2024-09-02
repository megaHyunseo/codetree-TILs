n = int(input())

a = list(map(int, input().split()))

k = [i ** 2 for i in a]

print(*k)