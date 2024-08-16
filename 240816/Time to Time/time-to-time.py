h1, m1, h2, m2 = map(int, input().split())

s = (h2 * 60) + m2

k = s - (h1 * 60) - m1

print(k)