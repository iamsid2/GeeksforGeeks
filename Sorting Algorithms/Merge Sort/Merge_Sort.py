def merge(arr,l,m,n):
	n1=m-l+1
	n2=n-m
	L=[]
	N=[]
	for i in range(n1):
		L.apend(arr[i])
	for j in range(n2):
		N.append(arr[m+1+j]) 
	i=0
	j=0
	k=l
	while i<n1 and j<n2:
		if L[i]<=N[j]:
			arr[k]=L[i]
			i+=1
		else:
			arr[k]=N[j]
		k+=1
	if i<n1:
		arr[k]=L[i]
		i+=1
		k+=1
	if j<n2:
		arr[k]=N[j]
		j+=1
		k+=1

def merge_sort(arr,l,n):
	while l<n:
		m = l + (n-l)/2
		merge_sort(arr,l,m)
		merge_sort(arr,m+1,n)
		merge(arr,l,m,n)

def Print(arr,l,n):
	print("The array after Merge_Sort becomes")
	for i in range(l,n):
		print(arr[i], end=' ')

print("Enter the number of elements:")
n = int(input())
print("Enter the array elements:")
arr = input().split(' ')
arr = [int(i) for i in arr]
merge_sort(arr,0,n-1)
Print(arr,0,n-1)


