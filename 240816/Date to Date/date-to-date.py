day = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

a, b, c, d = map(int, input().split())

s = (sum(day[1:c]) + d) - (sum(day[1:a]) + b) + 1

print(s)