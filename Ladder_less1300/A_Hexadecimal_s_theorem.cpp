#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  if(n == 0){
    cout<<0<<" "<<0<<" "<<0<<endl;
    return;
  }
  if(n == 1){
    cout<<0<<" "<<0<<" "<<1<<endl;
    return;
  }
  if(n == 2){
        cout<<0<<" "<<1<<" "<<1<<endl;
        return;
  }
  int n2 = 1;
  int n1 = 0;
  int n3;
  while(n2+n1 != n){
    int next = n1+n2;
    n3 = n2;
    n2 = n1;
    n1 = next;
  }

  cout<<n2-n3<<" "<<n3<<" "<<n1<<endl;
//   int goal = n2;
//   n2 = 0;
//   n1 = 1;
//   while(n2+n1 != goal){
//     int next = n1+n2;
//     n2 = n1;
//     n1 = next;
//   }

//   cout<<
}

int32_t main(){
    solve();
    return 0;
}