S = input()
result = int(S[0])

for i in range(1,len(S)):
    num = int(S[i])
    if (num < 2 or result < 2):
        result += num
    else :
        result *= num

print("resutl = ", result)