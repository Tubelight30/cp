#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int a,b;
  cin>>a>>b;
  int count = 0;
  while(a<=b){
    if(a == b){
        count++;
        break;
    }
    a = a*3;
    b = b*2;
    count++;
  }
  cout<<count<<endl;
}

int32_t main(){
        solve();
    return 0;
}