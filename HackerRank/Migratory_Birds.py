import math
import os
import random
import re
import sys


n = int(input())
arr = input().split(' ')
arr = [int(i) for i in arr]
arr.sort()
#print(arr)
'''cnt = []
cnt.append(arr.count(arr[0]))
#print(cnt)
for i in range(1,n):
    if arr[i] == arr[i-1]:
        i += 1
    else:
        cnt.append(arr.count(arr[i]))
#print(cnt)
m = len(cnt)
for j in range(m-1,1,-1):
    if cnt[j-1] > cnt[j]:
        ans = cnt[j-1]
#print(ans,j)
for i in range(0,n):
    if(arr.count(arr[i]) == ans):
        a = arr[i]
        break
print(a) '''
cnt1 = arr.count(1)
cnt2 = arr.count(2)
cnt3 = arr.count(3)
cnt4 = arr.count(4)
cnt5 = arr.count(5)
cnt = [cnt1,cnt2,cnt3,cnt4,cnt5]
print(1+cnt.index(max(cnt)))
