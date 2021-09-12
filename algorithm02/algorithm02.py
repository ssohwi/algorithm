#!/usr/bin/env python
# coding: utf-8

# In[1]:


N, K =map(int, input().split()); # 동전의 종류 수, 거스름 돈
cnt = 0; # 총 동전의 수
coin = []; # 동전의 종류
for i in range(N):
    coin.append(int(input()));
    
for i in range(N-1,-1,-1):
    cnt += K // coin[i];
    K %= coin[i];
print(cnt)

