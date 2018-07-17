#include <iostream>

using namespace std;

int linear_search(int arr[], int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
			return i+1;
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
	int result = linear_search(arr,n,x);
	(result == -1)? cout<<"Element is not present in array"
                 : cout<<"Element is present at index:\n"<<result;
	return 0;
}
