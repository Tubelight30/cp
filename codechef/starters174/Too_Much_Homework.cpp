#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int x,y;
  cin>>x>>y;

  if(x+10*y>=100){
    cout<<"Yes"<<endl;
    return;
  }
  cout<<"No"<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}