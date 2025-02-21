#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n,m;
  cin>>n>>m;
  vector<string> v(n);
  for(int i  =0;i<n;i++){
    // string s;
    cin>>v[i];
  }
  for(int i =0 ;i<n;i++){
    for(int j = 0;j<m;j++){
        if(v[i][j] == '.'){
            //up
            if((i+j)%2 == 0){
                v[i][j] = 'B';
                continue;
            }
            v[i][j] = 'W';
        }
    }
  }
  for(auto i:v){
    cout<<i<<endl;
  }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}