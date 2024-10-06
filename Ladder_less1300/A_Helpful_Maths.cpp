#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  string s;
  cin>>s;
  multiset<int> s1;
  for(int i = 0;i<s.length();i+=2){
    s1.insert(s[i]-48);
  }
  string ans = "";
  for(auto ele: s1){
    ans+= to_string(ele);
    ans+="+";
  }
  cout<<ans.substr(0,ans.length()-1)<<endl;
}

int32_t main(){
        solve();
    return 0;
}