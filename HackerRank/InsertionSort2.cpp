#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j>=0;j--)
        {
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
        for(int k=0;k<n;k++)
            cout<<a[k]<<" ";
        cout<<"\n";
    }

}
