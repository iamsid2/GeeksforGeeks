def Bubble_Sort(arr,n):
	for i in range(n-1):
		for j in range(n-i-1):
			if arr[j] > arr[j+1]:
				arr[j],arr[j+1] = arr[j+1], arr[j]
	print("The array after Bubble_Sort becomes")
	for i in range(n):
		print(arr[i], end=' ')
	#print(int(i) for i in arr)

print("Enter the array elements")
arr = input().split(' ')
arr = [int(i) for i in arr]
Bubble_Sort(arr, len(arr))