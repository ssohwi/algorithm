# 입력
place = input()
x = int(place[1]);
y = int(ord(place[0])) - int(ord('a')) + 1
cnt = 0
direc = [(-2, -1), (-2, 1), (-1, -2), (-1, 2), (1, -2), (1, 2), (2, -1), (2, 1)]

for move in direc:
    nx = x + move[0]
    ny = y + move[1]
    if(1 <= nx <= 8 and 1 <= ny <= 8 ):
        cnt += 1
# 출력
print(cnt)