def hackerrankinString(h,s,m,n):
    if m==0: return True
    if n==0: return False
    if h[m-1] == s[n-1]:
        return hackerrankinString(h,s,m-1,n-1)
    else:
        return hackerrankinString(h,s,m,n-1)
    # print(m,n)

h = "hackerrank"
m = len(h)
q = int(input())
for i in range(q):
    s=input()   
    n = len(s)
    if hackerrankinString(h,s,m,n):
        print("Yes")
    else:
        print ("No")
# print(s)
# hackerrankinString(s,h,m,n)
