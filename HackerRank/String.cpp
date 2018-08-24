#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++)
        s+=s[i];
    cout<<s<<"\n"<<n;
    return 0;


}
