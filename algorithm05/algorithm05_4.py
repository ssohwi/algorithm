# 입력
S = input()
arr = []
val = 0

for i in S:
    if(i.isalpha()):
        arr.append(i)
    else:
        val += int(i)

# 문자열
arr.sort()
if (val != 0):
    arr.append(str(val))
    
#출력
print(''.join(arr))