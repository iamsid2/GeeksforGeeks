#include <bits/stdc++.h>

using namespace std;

int camelcase(string s) {
    int cnt=1,m;
    for(int i=0;i<100000;i++)
    {
        m=int(s[i]);
        if(m>64 && m<91)
            cnt++;

    }
    return (cnt+1);
}

int main() {
    string s;
    cin >> s;
    int result = camelcase(s);
    cout << result << endl;
    return 0;
}

