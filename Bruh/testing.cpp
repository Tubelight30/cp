#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve(){
  int l,r;
  cin>>l>>r;
  vector<ll> v;
  int d = 1;
  v.push_back(l);
  while(l<=r){
    v.push_back(l+d);
    d++;
  }

  for(auto ele: v)
    cout<<ele<<" ";
  
}

int main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}