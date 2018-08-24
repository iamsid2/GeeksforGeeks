#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int cmp = arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>cmp)
            arr[i+1]=arr[i];
        else
            arr[i+1] = cmp;

        for(int j=0;j<n;j++)
            cout<<arr[j]<<" ";
        cout<<"\n";
        if (arr[i]<cmp)
            break;
    }
    }


