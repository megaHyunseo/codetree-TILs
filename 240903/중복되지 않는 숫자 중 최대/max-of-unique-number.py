n = int(input())

a = set(map(int, input().split()))

try:
    print(max(a))
except:
    print(-1)