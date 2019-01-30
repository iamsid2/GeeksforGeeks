#include<iostream>

using namespace std;

long long checkprime(long long N)
{
    long long count = 0;
    for( int i = 1;i * i <=N;++i )
    {
         if( N % i == 0)
     {
         if( i * i == N )
                     count++;
                 else
                     count += 2;
      }
    }
    return count;
}

int main()
{
    long long n,x,i,j,cnt;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cnt = 0;
        cin>>x;
        cnt = checkprime(x);

        if(cnt>=4)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}


