#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n,x;
  cin>>n>>x;
  vector<int> v(n);
  for(int i = 0;i<n;i++){
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  int l = 0;
  int r= n-1;
  int gond = 0;
  while(l<r){
    if(v[l]+v[r] <= x){
        gond++;
        l++;
        r--;
    }else{
        gond++;
        r--;
    }
  }
  if(l == r) gond++;
  cout<<gond<<endl;
}

int32_t main(){
        solve();
    return 0;
}