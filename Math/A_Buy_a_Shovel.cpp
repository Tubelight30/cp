#include <bits/stdc++.h>
using namespace std;

void solve(){
  int k,r;
  cin>>k>>r;
  int shovels = 0;
  if(k%10 == 0 || (k-r)%10 == 0){
    cout<<"1"<<endl;
    return;
  }
  int temp = k;
  while(temp%10 != 0 && (temp-r)%10 != 0){
    shovels++;
    temp = temp+k;
    // cout<<temp<<endl;
  }
  cout<<shovels+1<<endl;
}

int main(){
        solve();
    return 0;
}