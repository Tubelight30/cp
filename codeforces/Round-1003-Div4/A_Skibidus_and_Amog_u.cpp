#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  for(int i = 0;i<n;i++){
    string s;
    cin>>s;

    if(s == "us"){
        cout<<"i"<<endl;
        continue;
    }
    string ans = s.substr(0,s.length()-2);
    cout<<ans+"i"<<endl;
  }
}

int32_t main(){
        solve();
    return 0;
}