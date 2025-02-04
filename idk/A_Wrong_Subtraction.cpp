#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n,k;
  cin>>n>>k;
  for(int i = 0;i<k;i++){
    if(n%10 != 0) n--;
    else n/=10;
  }
  cout<<n<<endl;
}

int32_t main(){
        solve();
    return 0;
}