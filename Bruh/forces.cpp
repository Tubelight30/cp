#include <bits/stdc++.h>
using namespace std;

void solve(){
  int x,y;
  cin>>x>>y;
  int operations = 0;
  if(x>=2*y || y>=2*y){
    cout<<operations<<endl;
  }else{
    if(abs(y-x/2)<abs(x-y/2)){
        operations = int(y-x/2);
        cout<<operations<<endl;
    }else{
        operations = int(x-y/2);
        cout<<operations<<endl;
    }
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