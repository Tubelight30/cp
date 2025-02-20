#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int k;
  cin>>k;
  string s;
  cin>>s;
  if(k == 1){
    cout<<s<<endl;
    return;
  }
  map<char,int> mp;
  for(int i = 0;i<s.length();i++){
    mp[s[i]]++;
  }
  string temp = "";
  for(auto i:mp){
    // cout<<i.first<<" "<<i.second<<endl;
    if(i.second%k != 0){
        cout<<-1<<endl;
        return;
    }
    temp.append(i.second/k,i.first);
  }

  string ans = "";
  for(int i  =0;i<k;i++){
    ans+=temp;
  }
  cout<<ans<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}