#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int x,y;
  cin>>x>>y;
  if(y == x+1){
    cout<<"Yes"<<endl;
    return ;
  }
  float k = (x-y+1)/9;
  if(k>=0 && (int)k*9 == (x-y+1)){
    cout<<"Yes"<<endl;
    return;
  }
  cout<<"No"<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}