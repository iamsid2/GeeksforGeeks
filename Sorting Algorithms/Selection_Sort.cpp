#include<iostream>

using namespace std;

int Selection_Sort(int arr[], int n)
{
    int i,j,min_indx;

    for(i=0;i<n-1;i++)
    {
        min_indx = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[min_indx] > arr[j])
                min_indx = j;
        }
        swap(arr[min_indx], arr[i]);
    }
    cout<<"The array after Selection Sort is:\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array:\n";
    cin>>n;
    int arr[n];
    cout<<"ENter the array elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Selection_Sort(arr,n);

    return 0;
}

