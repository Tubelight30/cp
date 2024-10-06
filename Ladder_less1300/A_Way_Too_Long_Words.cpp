#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  string s;
  cin>>s;
  if(s.length() <= 10){
    cout<<s<<endl;
    return;
  }
  cout<<s[0];
  cout<<s.length()-2;
  cout<<s[s.length()-1];
  cout<<endl;
}

int32_t main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}