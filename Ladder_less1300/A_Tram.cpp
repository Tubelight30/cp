#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  int curr = 0;
  int maxi = INT_MIN;
  int a,b;
  cin>>a>>b;
  curr = b;
  maxi = curr;
  for(int i = 1;i<n;i++){
    cin>>a>>b;
        curr = curr-a+b;
        maxi = max(maxi,curr);
  }
  cout<<maxi<<endl;
}

int32_t main(){
        solve();
    return 0;
}