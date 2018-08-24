#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int q,g=0;
    int arr[q+1][3];
    int cntarr[q+1];
    cin>>q;
    for(int i=0;i<q;i++)
        for(int j=0;j<2;j++)
       {
        cin>>arr[i][j];
        }

    for(int i=0;i<q;i++)
       {
            int cnt =0;
         for(int j=arr[i][g];j<=arr[i][g+1];j++)
         {
            double sr = sqrt(j);
            if((sr-floor(sr))==0)
                cnt++;

         }
         cntarr[i] = cnt;


        }
        for(int i=0;i<q;i++)
        cout<<cntarr[i]<<"\n";


}

