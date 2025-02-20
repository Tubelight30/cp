#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    string s;
    cin>>s;
    int pos0 = s.find("0000000");
    int pos1 = s.find("1111111");
    if(pos1>=0 || pos0>=0) cout<<"YES";
    else cout<<"NO";
    // int max0 = 0;
    // int max1 = 0;
    // int curr0 = 0;
    // int curr1 = 0;
    // int r = 0;
    // while(r<s.length()){
    //     if(s[r] == '0'){
    //         curr1 = 0;
    //         curr0+= 1;
    //         max0 = max(curr0,max0);
    //     }
    //     else{
    //         curr0 = 0;
    //         curr1 += 1;
    //         max1 = max(curr1,max1);
    //     }
    //     r++;
    // }
    // if(max0 >=7 || max1 >=7) cout<<"YES";
    // else cout<<"NO";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}