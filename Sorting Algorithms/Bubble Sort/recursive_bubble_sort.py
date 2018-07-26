def recursive_bubble_sort(arr,n):
	for i in range(n-1):
		try:
			if arr[i] > arr[i+1]:
				arr[i],arr[i+1] = arr[i+1],arr[i]
				recursive_bubble_sort(arr,n-1)
		except IndexError:
			pass
	return arr

print('Enter the array:')
arr = input().split(' ')
arr = [int(i) for i in arr]
recursive_bubble_sort(arr,len(arr))
for i in range(len(arr)):
	print(arr[i],end=' ')

