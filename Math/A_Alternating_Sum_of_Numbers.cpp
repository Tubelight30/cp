#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  int sign = 1;
  int ans = 0;
  for(int i = 0;i<n;i++){
    int temp;
    cin>>temp;
    ans+= sign*temp;
    sign *=-1;
  }
  cout<<ans<<endl;
}

int main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}