#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;

  if(n == 1){
    cout<<1<<endl;
    return;
  }
  if(n == 2 || n ==3){
    cout<<"NO SOLUTION"<<endl;
    return;
  }

  //4
  //2 4 1 3

  //5 
  //1 3 5 2 4
  //split into even and odd cases
  if(n%2 == 0){
    for(int i = 2;i<=n;i+=2){
        cout<<i<<" ";
    }
    for(int i = 1;i<n;i+=2){
        cout<<i<<" ";
    }
  }
  else{
    for(int i = 1;i<=n;i+=2){
        cout<<i<<" ";
    }
    for(int i = 2;i<n;i+=2){
        cout<<i<<" ";
    }
  }
}

int32_t main(){
        solve();
    return 0;
}