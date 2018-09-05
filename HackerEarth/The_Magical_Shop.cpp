#include<iostream>

using namespace std;

int main()
{
    unsigned long long a,b,l;
    string s;
    cin>>a>>b;
    cin>>s;
    l = s.size();
    unsigned long long pot[l+l],cnt=a,ans=0;
    pot[0] = a;
    unsigned long long i,j;
    for(i=1;i<l;i++)
    {
      pot[i] = cnt * cnt;
      cnt = pot[i];
    }
    for(j=0;j<l;j++)
    {
        cout<<pot[j]<<"\t";
    }
    //cout<<pot<<" ";
    for(j=0;j<l;j++)
    {
        if(s[j] == '1')
            ans += pot[j];
    }
    cout<<ans<<"\t";
    cout<<ans%b;
}


