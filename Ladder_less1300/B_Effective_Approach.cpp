#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  vector<int> v(n);
  unordered_map<int,int> mp;
  for(int i = 0;i<n;i++){
    cin>>v[i];
    mp[v[i]] = i;
  }
  int m;
  cin>>m;
  vector<int> query(m);
  for(int i = 0;i<m;i++){
    cin>>query[i];
  }
  int left = 0;
  int right = 0;
  for(int i = 0;i<m;i++){
    left+= mp[query[i]]+1;
    right+=n-mp[query[i]];
  }

  cout<<left<<" "<<right<<endl;
}

int32_t main(){
        solve();
    return 0;
}