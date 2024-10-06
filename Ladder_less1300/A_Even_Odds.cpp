#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n,k;
  cin>>n>>k;
  if(n%2 == 0){
    if(k>n/2){
        int ans = 0;
        int j = 2;
        for(int i = 1;i<=k-n/2;i++){
            ans = j;
            j+=2;
        }
        cout<<ans<<endl;
        return;
    }else{
        int ans = 0;
        int j = 1;
        for(int i = 1;i<=k;i++){
            ans = j;
            j+=2;
        }
        cout<<ans<<endl;
        return;
    }
  }
  else{
    if(k>n/2+1){
        int ans = 0;
        int j = 2;
        for(int i = 1;i<=k-n/2-1;i++){
            ans = j;
            j+=2;
        }
        cout<<ans<<endl;
        return;
    }else{
        int ans = 0;
        int j = 1;
        for(int i = 1;i<=k;i++){
            ans = j;
            j+=2;
        }
        cout<<ans<<endl;
        return;
    }
  }
}

int32_t main(){
        solve();
    return 0;
}