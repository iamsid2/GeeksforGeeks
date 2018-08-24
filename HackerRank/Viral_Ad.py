import math

def shared_ad(n):
    if n==1:
        return 5
    else:
        ads = math.floor(shared_ad(n-1)/2)*3
        return ads

def liked_ad(n):
    ads_liked = 0
    for i in range(1,n+1):
        ads_liked += math.floor(shared_ad(i)/2)
    return ads_liked

n = int(input())
ans = liked_ad(n)
print(ans)
