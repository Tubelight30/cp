#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n,m;
  cin>>n>>m;
  vector<int> v(n);
  int ans = 0;
  multiset<int> s1;
  for(int i = 0;i<n;i++){
    cin>>v[i];
    s1.insert(v[i]);
  }
  auto it = s1.begin();
  for(int i = 0;i<m;i++){
    int temp = *it;
    if(temp>0) break;
    ans -=temp;
    it++;
  }
  cout<<abs(ans)<<endl;
}

int32_t main(){
        solve();
    return 0;
}