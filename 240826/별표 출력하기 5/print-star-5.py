# claude3.5
n = int(input())

for i in range(n, 0, -1):
    # '*' 문자를 i개 만큼 반복하고, 끝에 공백을 추가하여 i번 반복
    print(f"{'*' * i} " * i)