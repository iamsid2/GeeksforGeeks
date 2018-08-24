#include <bits/stdc++.h>

using namespace std;

int main() {
int n,upc=0,loc=0,ch=0,no=0,count=0,i,z=0;
string s;
cin>>n>>s;

for(i=0;i<n;i++)
{
    if(int(s[i])>=65&&int(s[i])<=90)
    upc++;
    else if(int(s[i])>=97&&int(s[i])<=122)
    loc++;
    else if(int(s[i])>=48&&int(s[i])<=57)
    no++;
    else if(int(s[i])>=33&&int(s[i])<=43)
     ch++;
}
if(ch==0)
    count++;
if(no==0)
    count++;
if(upc==0)
    count++;
if(loc==0)
    count++;
if(n>=6&&count==0)
    cout<<0;
else if(n>=6&&count!=0)
    cout<<count;
else if(n<6&&count==0)
    cout<<(6-n);
else
{
if(ch==0)
    z++;
if(no==0)
    z++;
if(upc==0)
    z++;
if(loc==0)
    z++;
if((n+z)>=6)
    cout<<z;
else
{
    cout<<(6-n);
}
}
return 0;

}
