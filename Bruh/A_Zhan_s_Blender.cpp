#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  int x,y;
  cin>>x>>y;
  if(x<=y){
    int a = n/x;
    if(n%x == 0){
        cout<<a<<endl;
        return;
    }
    cout<<a+1<<endl;
    return;
  }else{
    int a = n/y;
    if(n%y == 0){
        cout<<a<<endl;
        return;
    }
    cout<<a+1<<endl;
    return;
  }


}

int main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}