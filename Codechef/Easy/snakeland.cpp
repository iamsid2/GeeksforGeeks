#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m,cnt=0;
        cin>>n>>m;
        int a[n+1][m+1];
        for(int j=0;j<n;j++)
        {
          for(int k=0;k<m;k++)
            cin>>a[j][k];
        }
        for(int j=0;j<n;j++)
        {
          for(int k=0;k<m;k++)
            {
                int z[10] = {a[i][j],a[i][j+1],a[i][j-1],a[i][k],a[j+1][k+1],a[j-1][k-1],a[j-1][k],a[j-1][k+1]}

            }
        }


    }


}
