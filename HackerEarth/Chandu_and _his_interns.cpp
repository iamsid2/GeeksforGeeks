#include<iostream>

using namespace std;

int main()
{
    long long n,x,i,j,cnt=2;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        for(j=2;j<x;j++)
        {
            if(x%j==0)
                cnt++;
            if(cnt >= 4)
                break;
        }
        if(cnt>=4)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
