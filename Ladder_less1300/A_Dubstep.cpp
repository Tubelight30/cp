#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve()
{
    string s;
    cin >> s;
    int flag = 1;
    for(int i= 0 ;i<s.length();i++){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i+=2;
            if(flag == 0)
                cout<<" ";
                flag = 1;
        }
        else{
            flag = 0;
            cout<<s[i];
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}