
#include <iostream>

using namespace std;

int binary_Search(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binary_Search(arr, l, mid-1, x);

        return binary_Search(arr, mid+1, r, x);
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

   int result = binary_Search(arr, 0, n-1, x);
   (result == -1)? cout<<"Element is not present in array"
                 : cout<<"Element is present at index:\n"<<result;
   return 0;
}
