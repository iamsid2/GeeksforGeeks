#include<iostream>

using namespace std;

void Recursive_Bubble_Sort(int arr[], int n)
{
    int i;
    if(n==1)
        return;
    for(i=0;i<n;i++)
    {
       if(arr[i]>arr[i+1])
            swap(arr[i], arr[i+1]);
    }
    Recursive_Bubble_Sort(arr,n-1);
}

void Print(int arr[],int n)
    {
        cout<<"The array after sorting becomes:\n";
        for(int i=0;i<n;i++)
            cout<<arr[i]<<"\t";
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
    Recursive_Bubble_Sort(arr,n);
    Print(arr,n);
    return 0;
}
