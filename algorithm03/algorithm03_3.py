N = int(input()) # 사람 수
P = list(map(int, input().split())) # 소요 시간

temp = 0
result =0
    
# 오름차순 정렬
for i in range(0,N):
    for j in range(i, N-1):
        if (P[i] > P[j+1]):
            temp = P[j+1]
            P[j+1] = P[i]
            P[i] = temp
            
# 총 소요시간 계산
for i in range(0, N):
    result += P[i]*(N-i)

print("result = ", result)