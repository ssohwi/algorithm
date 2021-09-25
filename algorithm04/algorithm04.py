N = [6, 0, 8, 2, 3, 0, 4, 0, 1]
n = len(N)
cnt =0

for i in range(n) :
    if (N[i] != 0) :
        N[cnt] = N[i];
        cnt+= 1;

for i in range(cnt,n) :
    N[i] = 0;

print(N);