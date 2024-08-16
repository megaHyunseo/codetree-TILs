day = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

a, b, c, d = map(int, input().split())

# 첫 번째 날짜를 연도 시작일부터의 일수로 변환
start_date = sum(day[1:a]) + b

# 두 번째 날짜를 연도 시작일부터의 일수로 변환
end_date = sum(day[1:c]) + d

# 날짜 차이를 계산하고, 같은 날일 경우에도 1이 되도록 보정
s = end_date - start_date + 1

print(s)