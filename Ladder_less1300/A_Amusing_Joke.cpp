#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  string a,b,c;
  cin>>a;
  cin>>b;
  cin>>c;
  unordered_map<char,int> mp;

  for(int i = 0;i<a.length();i++){
    mp[a[i]]++;
  }
  for(int i = 0;i<b.length();i++){
    mp[b[i]]++;
  }

  for(int i = 0;i<c.length();i++){
    if(mp.find(c[i]) == mp.end()){
        cout<<"NO"<<endl;
        return;
    }
    if(mp[c[i]]>=1) mp[c[i]]--;
    else{
        cout<<"NO"<<endl;
        return;
    }
  }
  for(auto ele:mp){
    if(ele.second != 0) {
        cout<<"NO"<<endl;
        return;
    }
  }
  cout<<"YES"<<endl;
}

int32_t main(){
        solve();
    return 0;
}