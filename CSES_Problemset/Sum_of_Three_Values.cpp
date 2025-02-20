#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n,t;
  cin>>n>>t;
  vector<int> v(n);
  map<int,int> mp;
  for(int i = 0;i<n;i++){
    cin>>v[i];
    mp[v[i]] = i;
  }
  if(n<=2){
    cout<<"IMPOSSIBLE"<<endl;
    return;
  }
//   return;
  for(int i =  0;i<n-1;i++){
    for(int j = i+1;j<n;j++){
        int comple = t-v[i]-v[j];
        auto it = mp.find(comple);
        if(it != mp.end() && (*it).second != i&& (*it).second != j){
            cout<<i+1<<" "<<j+1<<" "<<(*it).second+1<<endl;
            return;
        }
    }
  }
  cout<<"IMPOSSIBLE"<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}