#include<iostream>
#include<cstring>
using namespace std;

bool isSubSequence(string s, string h, int m, int n)
{
    if (n == 0) return true;
    if (m == 0) return false;
    if (s[m-1] == h[n-1])
        return isSubSequence(s, h, m-1, n-1);

    return isSubSequence(s, h, m-1, n);
}

int main()
{
    string h = "hackerrank";
    int n = h.length();
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
    string s;
    cin>>s;
    int m = s.length();
    isSubSequence(s, h, m, n)? cout << "Yes ":
                                     cout << "No";
     }
    return 0;
}
