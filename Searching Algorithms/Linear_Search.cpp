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
	cout<<"Element found at Position(if not found then -1):\n"<<linear_search(arr,n,x);
	return 0;
}
