#include <iostream>

using namespace std;

int binary_search(int arr[], int l,int n, int x)
{
	while(l<=n)
	{
		int m = l + (n-l)/2;
		if(arr[m]==x)
			return m+1;
		if(x>=arr[m])
			l=m+1;
		else
			n=m-1;

	}
	return -1;
}


int main()
{
	int n;
	cout<<"Enter the size of the array:\n";
	cin>>n;
	int arr[n],x;
	cout<<"Enter the array element:\n";
	for(int i=0;i<n;i++)
        cin>>arr[i];
	cout<<"Enter the element to be searched:\n";
	cin>>x;
	int result = binary_search(arr,0,n-1,x);
	(result == -1)? cout<<"Element is not present in array"
                 : cout<<"Element is present at index:\n"<<result;
	return 0;
}
