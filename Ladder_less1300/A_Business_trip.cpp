#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int k;
  cin>>k;
  vector<int> v(12);
  map<int,int> mp;

  for(int i = 0;i<12;i++){
    cin>>v[i];
  }
  if(k == 0){
    cout<<0<<endl;
    return;
  }
  sort(v.begin(),v.end());
  int count = 0;
  for(int i = 11;i>=0;i--){
      count++;
      k-=v[i];
      if(k<=0){
          cout<<count<<endl;
          return;
      }
  }
  cout<<-1<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}