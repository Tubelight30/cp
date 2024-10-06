#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  vector<pair<int,int>> v(n);
  for(int i = 0;i<n;i++){
    int x,y;
    cin>>x>>y;
    v[i] = {x,y};
  }
  int ans = 0;
  for(auto ele: v){
    int a = 0,b = 0,c = 0,d = 0;
    for(int i = 0;i<n;i++){
      if(v[i].second == ele.second && v[i].first > ele.first)a++;
      if(v[i].second == ele.second && v[i].first < ele.first)b++;
      if(v[i].first == ele.first && v[i].second > ele.second)c++;
      if(v[i].first == ele.first && v[i].second < ele.second)d++;
    }
    if(a && b && c && d) ans++;
  }
  cout<<ans<<endl;
}

int32_t main(){
        solve();
    return 0;
}