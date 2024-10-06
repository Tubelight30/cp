#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long int x,y,n;
  cin>>x>>y>>n;
  //k such that k%x = y and k is maximum(0<k<n)
  if((n-(n%x))+y <=n){
    cout<<(n-(n%x))+y<<endl;
    return;
  }
  cout<<(n-(n%x))-x+y<<endl;


}

int main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}