#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  map<int,int> mp;
  for(int i = 0;i<n;i++){
    int a,b;
    cin>>a>>b;
    mp[a]++;
    mp[b]--;
  }
  int count = 0;
  int maxcount = 0;
  for(auto it : mp){
    count += it.second;
    maxcount = max(count,maxcount);
  }
  cout<<maxcount<<endl;
}

int32_t main(){
        solve();
    return 0;
}