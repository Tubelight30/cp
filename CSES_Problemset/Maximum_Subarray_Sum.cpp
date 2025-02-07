#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  vector<int> v(n);
  int sum = 0;
  int maxsum=INT_MIN;
  for(int i = 0;i<n;i++){
    cin>>v[i];
    sum+=v[i];

    maxsum = max(maxsum,sum);
    if(sum<0){
        sum = 0;
    }
  }
  cout<<maxsum<<endl;
}

int32_t main(){
        solve();
    return 0;
}