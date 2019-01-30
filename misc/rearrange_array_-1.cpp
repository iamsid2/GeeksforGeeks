#include<iostream>

using namespace std;

int search_element(int arr2[], int n, int j)
{
    int flag = 0;
    for(int i=0;i<n;i++)
    {
        if(arr2[i]==j)
            flag = 1;
    }
    return flag;

}

int main()
{
    int n;
    cout<<"Enter the array size:\n";
    cin>>n;
    int arr1[n];
    cout<<"Enter array elements:\n";
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    int arr2[n];
    for(int i=0;i<n;i++)
        arr2[i]=arr1[i];
    for(int j=0;j<n;j++)
    {
        int flag=0;
        flag = search_element(arr2,n,j);
        if(flag==1)
            arr1[j]=j;
        else
        arr1[j]=-1;
        cout<<flag<<" ";
    }
    for(int i=0;i<n;i++)
        cout<<arr1[i]<<" ";

}
