a = list(map(int, input().split()))

odd = sum(a[1::2])
even = sum(a[::2])

print(max(odd, even) - min(odd, even))