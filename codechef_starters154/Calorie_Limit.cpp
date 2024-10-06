#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n,k;
  cin>>n>>k;
  int count = 0;
  bool flag = true;
  for(int i = 0;i<n;i++){
    int temp;
    cin>>temp;
    // cout<<temp<<" ";
    if(temp<=k && flag){
        k-=temp;
        count++;
    }
    else{
        flag = false;
    }
  }
//   cout<<endl;
  cout<<count<<endl;
}

int32_t main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}