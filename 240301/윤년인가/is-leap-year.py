a=int(input())
if a%100==0 and a%400!=0:
    print('false')
else:
    print('true' if a%4==0 else 'false')