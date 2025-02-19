#include <bits/stdc++.h>
using namespace std;
#define int long long int
int func(vector<int> &v,int sec,int t){
    int prod = 0;
    for(int i = 0;i<v.size();i++){
        prod+=sec/v[i];
        if(prod>=t) return prod;//avoid overflow if already greater.
    }
    return prod;
}
void solve(){
  int n,t;
  cin>>n>>t;
  vector<int> v(n);
  for(int i = 0;i<n;i++){
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  int low = v[0];
  int high = t*v[n-1];
//   cout<<t*v[n-1]<<endl;
//   cout<<func(v,41666667)<<endl;
//   cout<<41666667/v[0]<<endl;
  int ans = -1;
  while(low<=high){
    int mid = (low+high)/2;
    if(func(v,mid,t)>=t){
        ans = mid;
        high =mid-1;
    }
    else{
        low = mid+1;
    }
  }
  cout<<ans<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}