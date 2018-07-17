def linear_search(arr,x):
	n = len(arr)
	for i in range(n):
		if arr[i] == x:
			return i+1
	return -1

print("Enter the array elements:")
arr_list = input().split(' ')
arr = 	[int(i) for i in arr_list]
print("Enter the element to be Searched:")
x = int(input())
result = linear_search(arr,x)
if result == -1:
	print("Element not found!!!")
else:
	print("Element fount at position:",result)
