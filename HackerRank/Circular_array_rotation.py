def rotate(arr, m):
    return arr[m:] + arr[:m]

n,k,q = map(int,input().split(' '))
arr = input().split(' ')
arr = [int(i) for i in arr]
#print(arr)
queries = []
for i in range(q):
    queries_item = int(input())
    queries.append(queries_item)
#print(queries)
m = n-(k%n)
rotated_list = rotate(arr,m)
#print(rotated_list)
for i in range(q):
    print(rotated_list[queries[i]])


'''n,k,q = raw_input().strip().split(' ')
n,k,q = [int(n),int(k),int(q)]
a = map(int,raw_input().strip().split(' '))
a = a[n-(k%n):n]+a[0:n-(k%n)]
for a0 in xrange(q):
    m = int(raw_input().strip())
    print a[m]'''
