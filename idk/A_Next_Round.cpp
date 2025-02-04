#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  int k;
  cin>>n>>k;
  int count = 0;
  vector<int>v(n);
  for(int i = 0;i<n;i++){
    // int temp;
    cin>>v[i];
    // if(temp>=k) count++;
    // else break;
  }
  for(int i = 0;i<n;i++){
    if(v[i]>=v[k-1] && v[i]>0) count++;
    else break;
  }
  cout<<count<<endl;
}

int32_t main(){
        solve();
    return 0;
}