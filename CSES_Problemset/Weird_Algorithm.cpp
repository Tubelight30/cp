#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  cout<<n<<" ";
  while(n != 1){
    if(n%2 == 0){ 
        n/=2;
        cout<<n<<" ";
    }
    else{
        n*=3;
        n++;
        cout<<n<<" ";
    }
  }
  cout<<endl;
}

int32_t main(){
        solve();
    return 0;
}