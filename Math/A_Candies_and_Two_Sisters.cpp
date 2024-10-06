#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long int n;
  cin>>n;
  if(n<=2){
    cout<<"0"<<endl;
    return;
  }
  long long k = ceil(n/2.0);
  if(n%2 == 0) k++;
  cout<<n-k<<endl;
}

int main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}