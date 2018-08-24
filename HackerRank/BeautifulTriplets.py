n,d = map(int, input().split(' '))
a = input().split(' ')
a = [int(i) for i in a]
cnt = 0
for i in range(n-2):
    # for j in range(i+1,n-1):
    #     if a[j]-a[i] == d:
    #         for k in range(j+1,n):
    #             if a[k]-a[j] == d:
    #                 cnt+=1
    if a[i]+d in a and a[i]+2*d in a:
        cnt+=1
print(cnt)
