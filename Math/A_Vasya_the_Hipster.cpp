#include <bits/stdc++.h>
using namespace std;

void solve(){
  int a,b;
  cin>>a>>b;
  int diff = abs(a-b);
  int ans = 0;
  if(diff>=2) ans = diff/2;
  cout<<min(a,b)<<" "<<ans<<endl;
}

int main(){
        solve();
    return 0;
}