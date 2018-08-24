#include <bits/stdc++.h>

using namespace std;

int marsExploration(string s) {
    int cnt=0,p;
    for(int j=0;j<s.size();j+=3)
    {
        if(s[j]!='S' || s[j+1]!='O' ||s[j+2]!='S')
            cnt++;

    }
    return cnt;
}

int main() {
    string s;
    cin >> s;
    int result = marsExploration(s);
    cout << result << endl;
    return 0;
}
