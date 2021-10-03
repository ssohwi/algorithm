#입력
N = int(input())
x, y = 1, 1
plans = input().split(" ")

direc = {'L': [0, -1], 'R': [0, 1], 'U': [-1, 0], 'D': [1, 0]}
nx = 0
ny = 0

for plan in plans:
        nx = x + direc[plan][0]
        ny = y + direc[plan][1]
        #벗어난 경우
        if (nx<1 or ny<1 or nx>N or ny>N):
            continue
        #이동
        x = nx 
        y = ny
#출력
print(x, y)