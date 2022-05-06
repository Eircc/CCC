month = input().split()

print('Sun Mon Tue Wed Thr Fri Sat')
x = int(month[0])
for i in range(int(month[0]) - 1):
    print(f'   ', end=' ')

for i in range(1, int(month[1]) + 1):
    if x == 7 or i == int(month[1]):
        if i >= 10:
            print(f' {i}')
        else:
            print(f'  {i}')
        x = 0
    else:
        if i >= 10:
            print(f' {i}', end=' ')
        else:
            print(f'  {i}', end=' ')
    x += 1
