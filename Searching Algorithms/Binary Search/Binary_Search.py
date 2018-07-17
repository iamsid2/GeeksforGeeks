def binary_search(arr,l,n,x):
	while l <= n:
		m = int(l+(n-l)/2)
		if arr[m] == x:
			return m+1
		if arr[m] < x:
			l = m+1
		else:
			n = m-1
	return -1

print('Enter the array elements')
arr_list = input().split(' ')
arr = [int(i) for i in arr_list]
print('Enter the element to be searhed')
x = int(input())
n = len(arr)
result = binary_search(arr,0,n-1,x)
if result == -1:
	print("Element not found!!!")
else:
	print("Element fount at position:",result)