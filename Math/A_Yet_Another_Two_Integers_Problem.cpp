#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long a,b;
  cin>>a>>b;
  if(a==b){
    cout<<"0"<<endl;
    return;
  }
  long long diff = abs(a-b);
  long long steps = diff/10;
  if(diff%10 != 0) steps++;
  cout<<steps<<endl;
}

int main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}